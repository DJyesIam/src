#!/usr/bin/env python3

import os
import numpy as np
import pandas as pd

from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory

file_path = os.path.join(get_package_share_directory('autocar_map'), 'data')


class Path(Node):
    def __init__(self, bf_, gf_, pf_, rf_):

        self.global_map_x = {}
        self.global_map_y = {}
        self.ax = {}
        self.ay = {}
        self.car_mode = []

        if bf_ is not None:
            df = pd.read_csv(bf_)
            base = len(df['Link'].unique())
            self.base_map = [{} for _ in range(base)]
            for link in df['Link'].unique():

                data = df[df['Link'] == link]

                self.base_map[link]['X-axis'] = data['X-axis'].tolist()
                self.base_map[link]['Y-axis'] = data['Y-axis'].tolist()

        if gf_ is not None:
            df = pd.read_csv(gf_)
            for link in df['Link'].unique():

                var_name = 'global_' + str(link)

                data   = df[df['Link'] == link]
                before = df[df['Link'] == link-1].iloc[-5:]
                after  = df[df['Link'] == link+1].iloc[:10]

                if link == 0: link_data = pd.concat([data, after])
                else: link_data = pd.concat([before, data, after])

                self.ax[var_name] = link_data['X-axis'].tolist()
                self.ay[var_name] = link_data['Y-axis'].tolist()

                self.global_map_x[var_name] = data['X-axis'].tolist()
                self.global_map_y[var_name] = data['Y-axis'].tolist()

            self.car_mode = ['global' for _ in range(link+1)]
            self.car_mode[-1] = 'finish'
            self.next_path = ['none' for _ in range(link+1)]

        if pf_ is not None:
            df = pd.read_csv(pf_)
            for link in df['Link'].unique():

                var_name = 'parking_' + str(link)

                data = df[df['Link'] == link]

                self.ax[var_name] = data['X-axis'].tolist()
                self.ay[var_name] = data['Y-axis'].tolist()

        if rf_ is not None:
            df = pd.read_csv(rf_)
            for link in range(3):

                var_name = 'revpark_' + str(link)

                # 얕게
                data = df[df['Link'] == 0]

                x0 = data['X-axis'].tolist()
                y0 = data['Y-axis'].tolist()

                d = [-0.1, 5.1, 10.2] # 주차 경로 d m 앞으로 이동
                # kcity
                self.ax[var_name] = [i - 0.4423572639935003 * d[link] for i in x0]
                self.ay[var_name] = [i - 0.8308233860879995 * d[link] for i in y0]
                # htech
                # self.ax[var_name] = [i - 0.256388029315985 * d[link] for i in x0]
                # self.ay[var_name] = [i - 0.904206226115093 * d[link] for i in y0]

def test_track():
    base_file = file_path + '/ST_base.csv'
    # 웨이포인트 경로
    #global_file = file_path + '/relative_waypoints.csv'
    #global_file = file_path + '/Updated_Augmented_Waypoints.csv'
    #global_file = file_path + '/5m.csv'
    global_file = file_path + '/moving_square_10x10_or.csv'
    #global_file = file_path + '/htech/delivery.csv'
    parking_file = None
    revpark_file = None
    test_track = Path(base_file, global_file, parking_file, revpark_file)
    # test_track.car_mode[1] = 'tunnel'
    # test_track.car_mode[3] = 'delivery_A'
    # test_track.car_mode[5] = 'dynamic'
    # test_track.car_mode[6] = 'delivery_B'

    # left = [3,4]
    # right = [1,2]
    # none = [0,5]
    # for i in left:
    #     test_track.next_path[i] = 'left'
    # for i in right:
    #     test_track.next_path[i] = 'right'
    # for i in none:
    #     test_track.next_path[i] = 'none'

    return test_track


def boong():
    base_file = file_path + '/ST_base.csv'
    global_file = file_path + '/boong/boong_track.csv'
    parking_file = file_path + '/boong/boong_parking.csv'
    revpark_file = file_path + '/boong/boong_revpark.csv'
    boong = Path(base_file, global_file, parking_file, revpark_file)
    boong.car_mode[1] = 'delivery_A'
    boong.car_mode[3] = 'static0'
    boong.car_mode[5] = 'static1'
    # boong.car_mode[7] = 'delivery_A'
    # boong.car_mode[9] = 'delivery_B'
    # boong.car_mode[14] = 'revpark'

    # for i in range(len(boong.next_path)):
    #     boong.next_path[i] = 'right'

    return boong


def htech():
    base_file = file_path + '/ST_base.csv'
    global_file = file_path + '/relative_waypoints.csv'
    # global_file = file_path + '/htech/delivery.csv'
    parking_file = None
    revpark_file = None
    htech = Path(base_file, global_file, parking_file, revpark_file)
    htech.car_mode[0] = 'static0'
    htech.car_mode[1] = 'static1'
    # htech.car_mode[0] = 'tollgate'
    # htech.car_mode[1] = 'dynamic'
    # htech.car_mode[4] = 'tunnel'
    # htech.car_mode[0] = 'delivery_A'
    # htech.car_mode[3] = 'delivery_B'

    # htech.next_path[0] = 'right'

    return htech

def revpark():
    base_file = file_path + '/KC_base.csv'
    global_file = file_path + '/kcity/track.csv'
    parking_file = file_path + '/kcity/revpark1.csv'
    revpark_file = file_path + '/kcity/revpark2.csv'
    revpark = Path(base_file, global_file, parking_file, revpark_file)
    
    revpark.car_mode[12] = 'revpark'

    return revpark

def uturn():
    base_file = file_path + '/ST_base.csv'
    global_file = file_path + '/htech/uturn.csv'
    parking_file = None
    revpark_file = None
    uturn = Path(base_file, global_file, parking_file, revpark_file)
    uturn.car_mode[1] = 'uturn'
    uturn.car_mode[2] = 'tollgate'

    return uturn

def kcity():
    base_file = file_path + '/KC_base.csv'
    global_file = file_path + '/kcity/track.csv'
    parking_file = None
    revpark_file = file_path + '/kcity/revpark2.csv'
    kcity = Path(base_file, global_file, parking_file, revpark_file)
    kcity.car_mode[1] = 'delivery_A'
    kcity.car_mode[2] = 'static0'
    kcity.car_mode[5] = 'static1'
    kcity.car_mode[6] = 'delivery_B'
    kcity.car_mode[12] = 'revpark'

    straight = [4,5,9,10]
    left = [3,6,7]
    right = [2,8]
    for i in straight:
        kcity.next_path[i] = 'straight'
    for i in left:
        kcity.next_path[i] = 'left'
    for i in right:
        kcity.next_path[i] = 'right'

    return kcity

def qualifier():
    base_file = file_path + '/KC_base.csv'
    global_file = file_path + '/kcity/modify.csv'
    parking_file = None
    revpark_file = None
    qualifier = Path(base_file, global_file, parking_file, revpark_file)
    qualifier.car_mode[2] = 'uturn'
    qualifier.car_mode[3] = 'tollgate'
    qualifier.car_mode[5] = 'tunnel'

    return qualifier

# use_map = qualifier()
use_map = test_track()
start_index = 0