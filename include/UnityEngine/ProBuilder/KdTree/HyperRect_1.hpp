// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.HyperRect`1
  template<typename T>
  struct HyperRect_1/*, public System::ValueType*/ {
    public:
    // private T[] minPoint
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* minPoint;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private T[] maxPoint
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* maxPoint;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // Creating value type constructor for type: HyperRect_1
    constexpr HyperRect_1(::Array<T>* minPoint_ = {}, ::Array<T>* maxPoint_ = {}) noexcept : minPoint{minPoint_}, maxPoint{maxPoint_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public T[] get_MinPoint()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_MinPoint() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::get_MinPoint");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_MinPoint", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method);
    }
    // public System.Void set_MinPoint(T[] value)
    // Offset: 0xFFFFFFFF
    void set_MinPoint(::Array<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::set_MinPoint");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_MinPoint", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public T[] get_MaxPoint()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_MaxPoint() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::get_MaxPoint");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_MaxPoint", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method);
    }
    // public System.Void set_MaxPoint(T[] value)
    // Offset: 0xFFFFFFFF
    void set_MaxPoint(::Array<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::set_MaxPoint");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_MaxPoint", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // static public UnityEngine.ProBuilder.KdTree.HyperRect`1<T> Infinite(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<T> math)
    // Offset: 0xFFFFFFFF
    static UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Infinite(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::Infinite");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HyperRect_1<T>>::get(), "Infinite", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dimensions), ::il2cpp_utils::ExtractType(math)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ProBuilder::KdTree::HyperRect_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, dimensions, math);
    }
    // public T[] GetClosestPoint(T[] toPoint, UnityEngine.ProBuilder.KdTree.ITypeMath`1<T> math)
    // Offset: 0xFFFFFFFF
    ::Array<T>* GetClosestPoint(::Array<T>* toPoint, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::GetClosestPoint");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetClosestPoint", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(toPoint), ::il2cpp_utils::ExtractType(math)})));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method, toPoint, math);
    }
    // public UnityEngine.ProBuilder.KdTree.HyperRect`1<T> Clone()
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::HyperRect_1::Clone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ProBuilder::KdTree::HyperRect_1<T>, false>(*this, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.KdTree.HyperRect`1
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.HyperRect`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::KdTree::HyperRect_1, "UnityEngine.ProBuilder.KdTree", "HyperRect`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
