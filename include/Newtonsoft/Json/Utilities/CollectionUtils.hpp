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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: CollectionUtils
  class CollectionUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::CollectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::CollectionUtils*, "Newtonsoft.Json.Utilities", "CollectionUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.CollectionUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C12BC
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CollectionUtils : public ::Il2CppObject {
    public:
    // static public System.Boolean IsNullOrEmpty(System.Collections.Generic.ICollection`1<T> collection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool IsNullOrEmpty(::System::Collections::Generic::ICollection_1<T>* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::IsNullOrEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "IsNullOrEmpty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, collection);
    }
    // static public System.Void AddRange(System.Collections.Generic.IList`1<T> initial, System.Collections.Generic.IEnumerable`1<T> collection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::Generic::IEnumerable_1<T>* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::AddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "AddRange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initial), ::il2cpp_utils::ExtractType(collection)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, initial, collection);
    }
    // static public System.Void AddRange(System.Collections.Generic.IList`1<T> initial, System.Collections.IEnumerable collection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::IEnumerable* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::AddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "AddRange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initial), ::il2cpp_utils::ExtractType(collection)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, initial, collection);
    }
    // static public System.Boolean IsDictionaryType(System.Type type)
    // Offset: 0x20BF5DC
    static bool IsDictionaryType(::System::Type* type);
    // static public System.Reflection.ConstructorInfo ResolveEnumerableCollectionConstructor(System.Type collectionType, System.Type collectionItemType)
    // Offset: 0x20BF788
    static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType);
    // static public System.Reflection.ConstructorInfo ResolveEnumerableCollectionConstructor(System.Type collectionType, System.Type collectionItemType, System.Type constructorArgumentType)
    // Offset: 0x20BF898
    static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType, ::System::Type* constructorArgumentType);
    // static public System.Int32 IndexOf(System.Collections.Generic.IEnumerable`1<T> collection, System.Func`2<T,System.Boolean> predicate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int IndexOf(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "IndexOf", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection), ::il2cpp_utils::ExtractType(predicate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, collection, predicate);
    }
    // static public System.Boolean Contains(System.Collections.Generic.List`1<T> list, T value, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool Contains(::System::Collections::Generic::List_1<T>* list, T value, ::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "Contains", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, value, comparer);
    }
    // static public System.Int32 IndexOfReference(System.Collections.Generic.List`1<T> list, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::IndexOfReference");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Newtonsoft.Json.Utilities", "CollectionUtils", "IndexOfReference", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, item);
    }
    // static private System.Collections.Generic.IList`1<System.Int32> GetDimensions(System.Collections.IList values, System.Int32 dimensionsCount)
    // Offset: 0x20BFB5C
    static ::System::Collections::Generic::IList_1<int>* GetDimensions(::System::Collections::IList* values, int dimensionsCount);
    // static private System.Void CopyFromJaggedToMultidimensionalArray(System.Collections.IList values, System.Array multidimensionalArray, System.Int32[] indices)
    // Offset: 0x20BFE40
    static void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* values, ::System::Array* multidimensionalArray, ::ArrayW<int> indices);
    // static private System.Object JaggedArrayGetValue(System.Collections.IList values, System.Int32[] indices)
    // Offset: 0x20C00FC
    static ::Il2CppObject* JaggedArrayGetValue(::System::Collections::IList* values, ::ArrayW<int> indices);
    // static public System.Array ToMultidimensionalArray(System.Collections.IList values, System.Type type, System.Int32 rank)
    // Offset: 0x20C0250
    static ::System::Array* ToMultidimensionalArray(::System::Collections::IList* values, ::System::Type* type, int rank);
  }; // Newtonsoft.Json.Utilities.CollectionUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::IsNullOrEmpty
// Il2CppName: IsNullOrEmpty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::AddRange
// Il2CppName: AddRange
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::AddRange
// Il2CppName: AddRange
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType
// Il2CppName: IsDictionaryType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "IsDictionaryType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor
// Il2CppName: ResolveEnumerableCollectionConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*)>(&Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  static const MethodInfo* get() {
    static auto* collectionType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* collectionItemType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "ResolveEnumerableCollectionConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collectionType, collectionItemType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor
// Il2CppName: ResolveEnumerableCollectionConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*, ::System::Type*)>(&Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  static const MethodInfo* get() {
    static auto* collectionType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* collectionItemType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* constructorArgumentType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "ResolveEnumerableCollectionConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collectionType, collectionItemType, constructorArgumentType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::IndexOf
// Il2CppName: IndexOf
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::Contains
// Il2CppName: Contains
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::IndexOfReference
// Il2CppName: IndexOfReference
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions
// Il2CppName: GetDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<int>* (*)(::System::Collections::IList*, int)>(&Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions)> {
  static const MethodInfo* get() {
    static auto* values = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    static auto* dimensionsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "GetDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, dimensionsCount});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray
// Il2CppName: CopyFromJaggedToMultidimensionalArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*, ::System::Array*, ::ArrayW<int>)>(&Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray)> {
  static const MethodInfo* get() {
    static auto* values = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    static auto* multidimensionalArray = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "CopyFromJaggedToMultidimensionalArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, multidimensionalArray, indices});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue
// Il2CppName: JaggedArrayGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Collections::IList*, ::ArrayW<int>)>(&Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue)> {
  static const MethodInfo* get() {
    static auto* values = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "JaggedArrayGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, indices});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray
// Il2CppName: ToMultidimensionalArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::System::Collections::IList*, ::System::Type*, int)>(&Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray)> {
  static const MethodInfo* get() {
    static auto* values = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* rank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::CollectionUtils*), "ToMultidimensionalArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, type, rank});
  }
};
