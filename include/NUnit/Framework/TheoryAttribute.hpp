// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.CombiningStrategyAttribute
#include "NUnit/Framework/CombiningStrategyAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.IImplyFixture
#include "NUnit/Framework/Interfaces/IImplyFixture.hpp"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: TheoryAttribute
  class TheoryAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::TheoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::TheoryAttribute*, "NUnit.Framework", "TheoryAttribute");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TheoryAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10DB32C
  class TheoryAttribute : public ::NUnit::Framework::CombiningStrategyAttribute/*, public ::NUnit::Framework::Interfaces::IImplyFixture*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IImplyFixture
    operator ::NUnit::Framework::Interfaces::IImplyFixture() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IImplyFixture*>(this);
    }
    // Creating interface conversion operator: i_IImplyFixture
    inline ::NUnit::Framework::Interfaces::IImplyFixture* i_IImplyFixture() noexcept {
      return reinterpret_cast<::NUnit::Framework::Interfaces::IImplyFixture*>(this);
    }
  }; // NUnit.Framework.TheoryAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
