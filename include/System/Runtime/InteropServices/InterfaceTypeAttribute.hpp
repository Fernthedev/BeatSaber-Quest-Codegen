// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ComInterfaceType
#include "System/Runtime/InteropServices/ComInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: InterfaceTypeAttribute
  class InterfaceTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::InterfaceTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InterfaceTypeAttribute*, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.InterfaceTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1044B78
  // [AttributeUsageAttribute] Offset: 1044B78
  class InterfaceTypeAttribute : public ::System::Attribute {
    public:
    public:
    // System.Runtime.InteropServices.ComInterfaceType _val
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::InteropServices::ComInterfaceType val;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::ComInterfaceType) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Runtime::InteropServices::ComInterfaceType
    constexpr operator ::System::Runtime::InteropServices::ComInterfaceType() const noexcept {
      return val;
    }
    // Get instance field reference: System.Runtime.InteropServices.ComInterfaceType _val
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::ComInterfaceType& dyn__val();
    // public System.Void .ctor(System.Runtime.InteropServices.ComInterfaceType interfaceType)
    // Offset: 0x1D7BD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceTypeAttribute* New_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::InterfaceTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceTypeAttribute*, creationType>(interfaceType)));
    }
  }; // System.Runtime.InteropServices.InterfaceTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(InterfaceTypeAttribute), 16 + sizeof(::System::Runtime::InteropServices::ComInterfaceType)> __System_Runtime_InteropServices_InterfaceTypeAttributeSizeCheck;
  static_assert(sizeof(InterfaceTypeAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::InterfaceTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
