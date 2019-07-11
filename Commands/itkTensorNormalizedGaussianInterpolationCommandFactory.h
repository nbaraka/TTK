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
#ifndef _itk_TensorNormalizedGaussianInterpolationCommandFactory_h_
#define _itk_TensorNormalizedGaussianInterpolationCommandFactory_h_

#include "itkObjectFactoryBase.h"

namespace itk
{
  
  class TensorNormalizedGaussianInterpolationCommandFactory : public ObjectFactoryBase
  {
    
  public:
    using Self         = TensorNormalizedGaussianInterpolationCommandFactory;
    using Superclass   = ObjectFactoryBase;
    using Pointer      = SmartPointer<Self>;
    using ConstPointer = SmartPointer<const Self>;
    
    /** Class methods used to interface with the registered factories. */
    const char* GetITKSourceVersion() const override;
    const char* GetDescription() const override;
    
    /** Method for class instantiation. */
    itkFactorylessNewMacro(Self);
    static TensorNormalizedGaussianInterpolationCommandFactory* FactoryNew() { return new TensorNormalizedGaussianInterpolationCommandFactory;}
    
    /** Run-time type information (and related methods). */
    itkTypeMacro(TensorNormalizedGaussianInterpolationCommandFactory, ObjectFactoryBase);
    
    /** Register one factory of this type  */
    static void RegisterOneFactory()
    {
      TensorNormalizedGaussianInterpolationCommandFactory::Pointer CSFFactory = TensorNormalizedGaussianInterpolationCommandFactory::New();
      ObjectFactoryBase::RegisterFactory( CSFFactory );
    }
    
		
  protected:
    TensorNormalizedGaussianInterpolationCommandFactory();
    ~TensorNormalizedGaussianInterpolationCommandFactory() override;
    
  private:
    TensorNormalizedGaussianInterpolationCommandFactory(const Self&);
    void operator=(const Self&);
    
  };
  
}

#endif
