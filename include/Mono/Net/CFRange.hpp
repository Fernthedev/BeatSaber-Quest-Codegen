// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Net.CFRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct CFRange/*, public System::ValueType*/ {
    public:
    // public System.IntPtr Location
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr Location;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr Length
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr Length;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: CFRange
    constexpr CFRange(System::IntPtr Location_ = {}, System::IntPtr Length_ = {}) noexcept : Location{Location_}, Length{Length_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Location
    System::IntPtr& dyn_Location();
    // Get instance field reference: public System.IntPtr Length
    System::IntPtr& dyn_Length();
    // public System.Void .ctor(System.Int32 loc, System.Int32 len)
    // Offset: 0x15EE1D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    CFRange(int loc, int len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFRange::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(loc), ::il2cpp_utils::ExtractType(len)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, loc, len);
    }
  }; // Mono.Net.CFRange
  #pragma pack(pop)
  static check_size<sizeof(CFRange), 8 + sizeof(System::IntPtr)> __Mono_Net_CFRangeSizeCheck;
  static_assert(sizeof(CFRange) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFRange, "Mono.Net", "CFRange");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFRange::CFRange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
