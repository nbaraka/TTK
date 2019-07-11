/*=========================================================================

  Program:   Tensor ToolKit - TTK
  Module:    $URL$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) INRIA 2010. All rights reserved.
  See LICENSE.txt for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkAverageStdTensorCalculatorCommandFactory.h"
#include "itkCreateObjectFunction.h"
#include "itkAverageStdTensorCalculatorCommand.h"
#include "itkVersion.h"

namespace itk
{
  
  AverageStdTensorCalculatorCommandFactory::AverageStdTensorCalculatorCommandFactory()
  {
    this->RegisterOverride("itkCommandObjectBase",
			   "itkAverageStdTensorCalculatorCommand",
			   "Calculate the average and covariance matrix of a set of tensor fields",
			   1,
			   CreateObjectFunction<AverageStdTensorCalculatorCommand>::New());
  }
  
  AverageStdTensorCalculatorCommandFactory::~AverageStdTensorCalculatorCommandFactory()
  {
  }
  
  const char* 
  AverageStdTensorCalculatorCommandFactory::GetITKSourceVersion() const
  {
    return ITK_SOURCE_VERSION;
  }
  
  const char* 
  AverageStdTensorCalculatorCommandFactory::GetDescription() const
  {
    return "Calculate the average and covariance matrix of a set of tensor fields";
  }
  
} // end namespace itk
