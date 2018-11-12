// Tencent is pleased to support the open source community by making ncnn available.
//
// Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
#include <stdio.h>
#include "text_recognization.h"

int main(int argc, char** argv)
{
    unsigned char yuvData[70*180*2] = {0};
    DKSBoxTextRecognizationParam  param = {"0"};  
    char* result;

    DKSBox box = {0,0,180,0,180,70,0,70};
    DKBoxTextRecognizationInit();
    result = DKBoxTextRecognizationProcess(yuvData, 70, 180, box, param);
    DKBoxTextRecognizationEnd();

    printf("recognization results: "); 
    printf("%s\n", result);

    return 0;
}

