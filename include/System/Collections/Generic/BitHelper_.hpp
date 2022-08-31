// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: BitHelper
  class BitHelper_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::BitHelper_);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::BitHelper_*, "System.Collections.Generic", "BitHelper");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.BitHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BitHelper_ : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Int32 _length
    // Size: 0x4
    // Offset: 0x10
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: length and: arrayPtr
    char __padding0[0x4] = {};
    // private readonly System.Int32* _arrayPtr
    // Size: 0x8
    // Offset: 0x18
    int* arrayPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private readonly System.Int32[] _array
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> array;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Boolean _useStackAlloc
    // Size: 0x1
    // Offset: 0x28
    bool useStackAlloc;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length();
    // Get instance field reference: private readonly System.Int32* _arrayPtr
    [[deprecated("Use field access instead!")]] int*& dyn__arrayPtr();
    // Get instance field reference: private readonly System.Int32[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__array();
    // Get instance field reference: private readonly System.Boolean _useStackAlloc
    [[deprecated("Use field access instead!")]] bool& dyn__useStackAlloc();
    // System.Void .ctor(System.Int32* bitArrayPtr, System.Int32 length)
    // Offset: 0x1D81E04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitHelper_* New_ctor(int* bitArrayPtr, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::BitHelper_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitHelper_*, creationType>(bitArrayPtr, length)));
    }
    // System.Void .ctor(System.Int32[] bitArray, System.Int32 length)
    // Offset: 0x1D81E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitHelper_* New_ctor(::ArrayW<int> bitArray, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::BitHelper_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitHelper_*, creationType>(bitArray, length)));
    }
    // System.Void MarkBit(System.Int32 bitPosition)
    // Offset: 0x1D81E84
    void MarkBit(int bitPosition);
    // System.Boolean IsMarked(System.Int32 bitPosition)
    // Offset: 0x1D81F0C
    bool IsMarked(int bitPosition);
    // static System.Int32 ToIntArrayLength(System.Int32 n)
    // Offset: 0x1D81F9C
    static int ToIntArrayLength(int n);
  }; // System.Collections.Generic.BitHelper
  #pragma pack(pop)
  static check_size<sizeof(BitHelper_), 40 + sizeof(bool)> __System_Collections_Generic_BitHelper_SizeCheck;
  static_assert(sizeof(BitHelper_) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::BitHelper_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Generic::BitHelper_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Generic::BitHelper_::MarkBit
// Il2CppName: MarkBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::BitHelper_::*)(int)>(&System::Collections::Generic::BitHelper_::MarkBit)> {
  static const MethodInfo* get() {
    static auto* bitPosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::BitHelper_*), "MarkBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitPosition});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::BitHelper_::IsMarked
// Il2CppName: IsMarked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::BitHelper_::*)(int)>(&System::Collections::Generic::BitHelper_::IsMarked)> {
  static const MethodInfo* get() {
    static auto* bitPosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::BitHelper_*), "IsMarked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitPosition});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::BitHelper_::ToIntArrayLength
// Il2CppName: ToIntArrayLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Collections::Generic::BitHelper_::ToIntArrayLength)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::BitHelper_*), "ToIntArrayLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
