// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.IResourceReader
#include "System/Resources/IResourceReader.hpp"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: UnmanagedMemoryStream
  class UnmanagedMemoryStream;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9A89C
  class ResourceReader : public ::Il2CppObject/*, public System::Resources::IResourceReader*/ {
    public:
    // Nested type: System::Resources::ResourceReader::ResourceEnumerator
    class ResourceEnumerator;
    // private System.IO.BinaryReader _store
    // Size: 0x8
    // Offset: 0x10
    System::IO::BinaryReader* store;
    // Field size check
    static_assert(sizeof(System::IO::BinaryReader*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>*) == 0x8);
    // private System.Int64 _nameSectionOffset
    // Size: 0x8
    // Offset: 0x20
    int64_t nameSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _dataSectionOffset
    // Size: 0x8
    // Offset: 0x28
    int64_t dataSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32[] _nameHashes
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* nameHashes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32* _nameHashesPtr
    // Size: 0x8
    // Offset: 0x38
    int* nameHashesPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.Int32[] _namePositions
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* namePositions;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32* _namePositionsPtr
    // Size: 0x8
    // Offset: 0x48
    int* namePositionsPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.RuntimeType[] _typeTable
    // Size: 0x8
    // Offset: 0x50
    ::Array<System::RuntimeType*>* typeTable;
    // Field size check
    static_assert(sizeof(::Array<System::RuntimeType*>*) == 0x8);
    // private System.Int32[] _typeNamePositions
    // Size: 0x8
    // Offset: 0x58
    ::Array<int>* typeNamePositions;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*) == 0x8);
    // private System.Int32 _numResources
    // Size: 0x4
    // Offset: 0x68
    int numResources;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numResources and: ums
    char __padding11[0x4] = {};
    // private System.IO.UnmanagedMemoryStream _ums
    // Size: 0x8
    // Offset: 0x70
    System::IO::UnmanagedMemoryStream* ums;
    // Field size check
    static_assert(sizeof(System::IO::UnmanagedMemoryStream*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x78
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ResourceReader
    ResourceReader(System::IO::BinaryReader* store_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache_ = {}, int64_t nameSectionOffset_ = {}, int64_t dataSectionOffset_ = {}, ::Array<int>* nameHashes_ = {}, int* nameHashesPtr_ = {}, ::Array<int>* namePositions_ = {}, int* namePositionsPtr_ = {}, ::Array<System::RuntimeType*>* typeTable_ = {}, ::Array<int>* typeNamePositions_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter_ = {}, int numResources_ = {}, System::IO::UnmanagedMemoryStream* ums_ = {}, int version_ = {}) noexcept : store{store_}, resCache{resCache_}, nameSectionOffset{nameSectionOffset_}, dataSectionOffset{dataSectionOffset_}, nameHashes{nameHashes_}, nameHashesPtr{nameHashesPtr_}, namePositions{namePositions_}, namePositionsPtr{namePositionsPtr_}, typeTable{typeTable_}, typeNamePositions{typeNamePositions_}, objFormatter{objFormatter_}, numResources{numResources_}, ums{ums_}, version{version_} {}
    // Creating interface conversion operator: operator System::Resources::IResourceReader
    operator System::Resources::IResourceReader() noexcept {
      return *reinterpret_cast<System::Resources::IResourceReader*>(this);
    }
    // Get instance field: private System.IO.BinaryReader _store
    System::IO::BinaryReader* _get__store();
    // Set instance field: private System.IO.BinaryReader _store
    void _set__store(System::IO::BinaryReader* value);
    // Get instance field: System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* _get__resCache();
    // Set instance field: System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    void _set__resCache(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* value);
    // Get instance field: private System.Int64 _nameSectionOffset
    int64_t _get__nameSectionOffset();
    // Set instance field: private System.Int64 _nameSectionOffset
    void _set__nameSectionOffset(int64_t value);
    // Get instance field: private System.Int64 _dataSectionOffset
    int64_t _get__dataSectionOffset();
    // Set instance field: private System.Int64 _dataSectionOffset
    void _set__dataSectionOffset(int64_t value);
    // Get instance field: private System.Int32[] _nameHashes
    ::Array<int>* _get__nameHashes();
    // Set instance field: private System.Int32[] _nameHashes
    void _set__nameHashes(::Array<int>* value);
    // Get instance field: private System.Int32* _nameHashesPtr
    int* _get__nameHashesPtr();
    // Set instance field: private System.Int32* _nameHashesPtr
    void _set__nameHashesPtr(int* value);
    // Get instance field: private System.Int32[] _namePositions
    ::Array<int>* _get__namePositions();
    // Set instance field: private System.Int32[] _namePositions
    void _set__namePositions(::Array<int>* value);
    // Get instance field: private System.Int32* _namePositionsPtr
    int* _get__namePositionsPtr();
    // Set instance field: private System.Int32* _namePositionsPtr
    void _set__namePositionsPtr(int* value);
    // Get instance field: private System.RuntimeType[] _typeTable
    ::Array<System::RuntimeType*>* _get__typeTable();
    // Set instance field: private System.RuntimeType[] _typeTable
    void _set__typeTable(::Array<System::RuntimeType*>* value);
    // Get instance field: private System.Int32[] _typeNamePositions
    ::Array<int>* _get__typeNamePositions();
    // Set instance field: private System.Int32[] _typeNamePositions
    void _set__typeNamePositions(::Array<int>* value);
    // Get instance field: private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _get__objFormatter();
    // Set instance field: private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    void _set__objFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);
    // Get instance field: private System.Int32 _numResources
    int _get__numResources();
    // Set instance field: private System.Int32 _numResources
    void _set__numResources(int value);
    // Get instance field: private System.IO.UnmanagedMemoryStream _ums
    System::IO::UnmanagedMemoryStream* _get__ums();
    // Set instance field: private System.IO.UnmanagedMemoryStream _ums
    void _set__ums(System::IO::UnmanagedMemoryStream* value);
    // Get instance field: private System.Int32 _version
    int _get__version();
    // Set instance field: private System.Int32 _version
    void _set__version(int value);
    // System.Void .ctor(System.IO.Stream stream, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> resCache)
    // Offset: 0x147FCF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceReader* New_ctor(System::IO::Stream* stream, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceReader*, creationType>(stream, resCache)));
    }
    // public System.Void Close()
    // Offset: 0x147FF44
    void Close();
    // public System.Void Dispose()
    // Offset: 0x147FFD8
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x147FF8C
    void Dispose(bool disposing);
    // static System.Int32 ReadUnalignedI4(System.Int32* p)
    // Offset: 0x1480020
    static int ReadUnalignedI4(int* p);
    // private System.Void SkipString()
    // Offset: 0x1480028
    void SkipString();
    // private System.Int32 GetNameHash(System.Int32 index)
    // Offset: 0x1480100
    int GetNameHash(int index);
    // private System.Int32 GetNamePosition(System.Int32 index)
    // Offset: 0x1480150
    int GetNamePosition(int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14802A4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x14802A8
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // System.Resources.ResourceReader/System.Resources.ResourceEnumerator GetEnumeratorInternal()
    // Offset: 0x14803A8
    System::Resources::ResourceReader::ResourceEnumerator* GetEnumeratorInternal();
    // System.Int32 FindPosForResource(System.String name)
    // Offset: 0x1480418
    int FindPosForResource(::Il2CppString* name);
    // private System.Boolean CompareStringEqualsName(System.String name)
    // Offset: 0x14807DC
    bool CompareStringEqualsName(::Il2CppString* name);
    // private System.String AllocateStringForNameIndex(System.Int32 index, out System.Int32 dataOffset)
    // Offset: 0x14809F4
    ::Il2CppString* AllocateStringForNameIndex(int index, ByRef<int> dataOffset);
    // private System.Object GetValueForNameIndex(System.Int32 index)
    // Offset: 0x14812A8
    ::Il2CppObject* GetValueForNameIndex(int index);
    // System.String LoadString(System.Int32 pos)
    // Offset: 0x14817B8
    ::Il2CppString* LoadString(int pos);
    // System.Object LoadObject(System.Int32 pos)
    // Offset: 0x1481DD4
    ::Il2CppObject* LoadObject(int pos);
    // System.Object LoadObject(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x1481E0C
    ::Il2CppObject* LoadObject(int pos, ByRef<System::Resources::ResourceTypeCode> typeCode);
    // System.Object LoadObjectV1(System.Int32 pos)
    // Offset: 0x1481548
    ::Il2CppObject* LoadObjectV1(int pos);
    // private System.Object _LoadObjectV1(System.Int32 pos)
    // Offset: 0x1481EAC
    ::Il2CppObject* _LoadObjectV1(int pos);
    // System.Object LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x148167C
    ::Il2CppObject* LoadObjectV2(int pos, ByRef<System::Resources::ResourceTypeCode> typeCode);
    // private System.Object _LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x14827FC
    ::Il2CppObject* _LoadObjectV2(int pos, ByRef<System::Resources::ResourceTypeCode> typeCode);
    // private System.Object DeserializeObject(System.Int32 typeIndex)
    // Offset: 0x1482614
    ::Il2CppObject* DeserializeObject(int typeIndex);
    // private System.Void ReadResources()
    // Offset: 0x147FDD4
    void ReadResources();
    // private System.Void _ReadResources()
    // Offset: 0x1482E64
    void _ReadResources();
    // private System.RuntimeType FindType(System.Int32 typeIndex)
    // Offset: 0x1481A74
    System::RuntimeType* FindType(int typeIndex);
  }; // System.Resources.ResourceReader
  #pragma pack(pop)
  static check_size<sizeof(ResourceReader), 120 + sizeof(int)> __System_Resources_ResourceReaderSizeCheck;
  static_assert(sizeof(ResourceReader) == 0x7C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceReader*, "System.Resources", "ResourceReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ResourceReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)(bool)>(&System::Resources::ResourceReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ReadUnalignedI4
// Il2CppName: ReadUnalignedI4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int*)>(&System::Resources::ResourceReader::ReadUnalignedI4)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "ReadUnalignedI4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::SkipString
// Il2CppName: SkipString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::SkipString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "SkipString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetNameHash
// Il2CppName: GetNameHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetNameHash)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetNameHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetNamePosition
// Il2CppName: GetNamePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetNamePosition)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetNamePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetEnumeratorInternal
// Il2CppName: GetEnumeratorInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Resources::ResourceReader::ResourceEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumeratorInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetEnumeratorInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::FindPosForResource
// Il2CppName: FindPosForResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(::Il2CppString*)>(&System::Resources::ResourceReader::FindPosForResource)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "FindPosForResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::CompareStringEqualsName
// Il2CppName: CompareStringEqualsName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::ResourceReader::*)(::Il2CppString*)>(&System::Resources::ResourceReader::CompareStringEqualsName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "CompareStringEqualsName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::AllocateStringForNameIndex
// Il2CppName: AllocateStringForNameIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Resources::ResourceReader::*)(int, ByRef<int>)>(&System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "AllocateStringForNameIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, dataOffset});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetValueForNameIndex
// Il2CppName: GetValueForNameIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetValueForNameIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetValueForNameIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadString
// Il2CppName: LoadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadString)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObject
// Il2CppName: LoadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadObject)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObject
// Il2CppName: LoadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObject)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObjectV1
// Il2CppName: LoadObjectV1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadObjectV1)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObjectV1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_LoadObjectV1
// Il2CppName: _LoadObjectV1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::_LoadObjectV1)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_LoadObjectV1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObjectV2
// Il2CppName: LoadObjectV2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObjectV2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObjectV2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_LoadObjectV2
// Il2CppName: _LoadObjectV2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::_LoadObjectV2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_LoadObjectV2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::DeserializeObject
// Il2CppName: DeserializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::DeserializeObject)> {
  static const MethodInfo* get() {
    static auto* typeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "DeserializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeIndex});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ReadResources
// Il2CppName: ReadResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::ReadResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "ReadResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_ReadResources
// Il2CppName: _ReadResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::_ReadResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_ReadResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::FindType
// Il2CppName: FindType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::FindType)> {
  static const MethodInfo* get() {
    static auto* typeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "FindType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeIndex});
  }
};
