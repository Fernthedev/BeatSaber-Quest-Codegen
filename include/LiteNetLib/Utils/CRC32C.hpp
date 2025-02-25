// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.CRC32C
  // [TokenAttribute] Offset: FFFFFFFF
  class CRC32C : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CRC32C
    CRC32C() noexcept {}
    // static field const value: static public System.Int32 ChecksumSize
    static constexpr const int ChecksumSize = 4;
    // Get static field: static public System.Int32 ChecksumSize
    static int _get_ChecksumSize();
    // Set static field: static public System.Int32 ChecksumSize
    static void _set_ChecksumSize(int value);
    // static field const value: static private System.UInt32 Poly
    static constexpr const uint Poly = 2197175160u;
    // Get static field: static private System.UInt32 Poly
    static uint _get_Poly();
    // Set static field: static private System.UInt32 Poly
    static void _set_Poly(uint value);
    // Get static field: static private readonly System.UInt32[] Table
    static ::Array<uint>* _get_Table();
    // Set static field: static private readonly System.UInt32[] Table
    static void _set_Table(::Array<uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x1C29D68
    static void _cctor();
    // static public System.UInt32 Compute(System.Byte[] input, System.Int32 offset, System.Int32 length)
    // Offset: 0x1C1BF9C
    static uint Compute(::Array<uint8_t>* input, int offset, int length);
  }; // LiteNetLib.Utils.CRC32C
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::CRC32C*, "LiteNetLib.Utils", "CRC32C");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::CRC32C::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::Utils::CRC32C::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::CRC32C*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::CRC32C::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint8_t>*, int, int)>(&LiteNetLib::Utils::CRC32C::Compute)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::CRC32C*), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, offset, length});
  }
};
