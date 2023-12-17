#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
template<typename TElement>
constexpr void System::Linq::__Set_1__Slot<TElement>::__set_hashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename TElement>
constexpr int32_t& System::Linq::__Set_1__Slot<TElement>::__get_hashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TElement>
constexpr int32_t const& System::Linq::__Set_1__Slot<TElement>::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TElement>
constexpr void System::Linq::__Set_1__Slot<TElement>::__set_value(TElement  value)  {
::cordl_internals::setInstanceField<TElement, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TElement>(value));
}
template<typename TElement>
constexpr TElement& System::Linq::__Set_1__Slot<TElement>::__get_value()  {
return ::cordl_internals::getInstanceField<TElement, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TElement>
constexpr TElement const& System::Linq::__Set_1__Slot<TElement>::__get_value() const {
return ::cordl_internals::getInstanceField<TElement, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TElement>
constexpr void System::Linq::__Set_1__Slot<TElement>::__set_next(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename TElement>
constexpr int32_t& System::Linq::__Set_1__Slot<TElement>::__get_next()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TElement>
constexpr int32_t const& System::Linq::__Set_1__Slot<TElement>::__get_next() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TElement>
constexpr ::System::Linq::__Set_1__Slot<TElement>::__Set_1__Slot(int32_t  hashCode, TElement  value, int32_t  next) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->hashCode = hashCode;
this->value = value;
this->next = next;
}
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*)>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)(::UnityEngine::SceneManagement::Scene)>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)(::UnityEngine::SceneManagement::Scene)>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)(::UnityEngine::SceneManagement::Scene, bool)>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::*)(::UnityEngine::SceneManagement::Scene)>(&::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>>(value));
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*> const& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>, 0x18>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*>(value));
}
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>* System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*> System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*, 0x28>(this);
}
inline ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>* System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>(comparer));
}
inline void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
inline bool System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Add(::UnityEngine::SceneManagement::Scene  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Remove(::UnityEngine::SceneManagement::Scene  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Find(::UnityEngine::SceneManagement::Scene  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
inline void System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>::InternalGetHashCode(::UnityEngine::SceneManagement::Scene  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)(::UnityEngine::ProBuilder::EdgeLookup, bool)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)()>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>>(value));
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*> const& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>, 0x18>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*>(value));
}
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>* System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*> System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*, 0x28>(this);
}
inline ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>* System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>(comparer));
}
inline void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Add(::UnityEngine::ProBuilder::EdgeLookup  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Remove(::UnityEngine::ProBuilder::EdgeLookup  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Find(::UnityEngine::ProBuilder::EdgeLookup  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
inline void System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>::InternalGetHashCode(::UnityEngine::ProBuilder::EdgeLookup  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)(::UnityEngine::ProBuilder::Edge)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)(::UnityEngine::ProBuilder::Edge)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)(::UnityEngine::ProBuilder::Edge, bool)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)()>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::*)(::UnityEngine::ProBuilder::Edge)>(&::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>>(value));
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*> const& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>, 0x18>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*>(value));
}
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>* System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*> System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*, 0x28>(this);
}
inline ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>* System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>(comparer));
}
inline void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Add(::UnityEngine::ProBuilder::Edge  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Remove(::UnityEngine::ProBuilder::Edge  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Find(::UnityEngine::ProBuilder::Edge  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
inline void System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>::InternalGetHashCode(::UnityEngine::ProBuilder::Edge  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<char16_t>::*)(::System::Collections::Generic::IEqualityComparer_1<char16_t>*)>(&::System::Linq::Set_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<char16_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<char16_t>::*)(char16_t)>(&::System::Linq::Set_1<char16_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<char16_t>::*)(char16_t)>(&::System::Linq::Set_1<char16_t>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<char16_t>::*)(char16_t, bool)>(&::System::Linq::Set_1<char16_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<char16_t>::*)()>(&::System::Linq::Set_1<char16_t>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<char16_t>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Set_1<char16_t>::*)(char16_t)>(&::System::Linq::Set_1<char16_t>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<char16_t>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<char16_t>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<char16_t>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Linq::Set_1<char16_t>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>>(value));
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>& System::Linq::Set_1<char16_t>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*> const& System::Linq::Set_1<char16_t>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>, 0x18>(this);
}
constexpr void System::Linq::Set_1<char16_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<char16_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Linq::Set_1<char16_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Linq::Set_1<char16_t>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<char16_t>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Linq::Set_1<char16_t>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Linq::Set_1<char16_t>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<char16_t>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<char16_t>*>(value));
}
constexpr ::System::Collections::Generic::IEqualityComparer_1<char16_t>* System::Linq::Set_1<char16_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<char16_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<char16_t>*> System::Linq::Set_1<char16_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<char16_t>*, 0x28>(this);
}
inline ::System::Linq::Set_1<char16_t>* System::Linq::Set_1<char16_t>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<char16_t>*>(comparer));
}
inline void System::Linq::Set_1<char16_t>::_ctor(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<char16_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
inline bool System::Linq::Set_1<char16_t>::Add(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<char16_t>::Remove(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<char16_t>::Find(char16_t  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
inline void System::Linq::Set_1<char16_t>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Linq::Set_1<char16_t>::InternalGetHashCode(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<char16_t>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<int32_t>::*)(::System::Collections::Generic::IEqualityComparer_1<int32_t>*)>(&::System::Linq::Set_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<int32_t>::*)(int32_t)>(&::System::Linq::Set_1<int32_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<int32_t>::*)(int32_t)>(&::System::Linq::Set_1<int32_t>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Set_1<int32_t>::*)(int32_t, bool)>(&::System::Linq::Set_1<int32_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Set_1<int32_t>::*)()>(&::System::Linq::Set_1<int32_t>::Resize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Set_1<int32_t>.InternalGetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Set_1<int32_t>::*)(int32_t)>(&::System::Linq::Set_1<int32_t>::InternalGetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Set_1<int32_t>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<int32_t>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<int32_t>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Linq::Set_1<int32_t>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>>(value));
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>& System::Linq::Set_1<int32_t>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*> const& System::Linq::Set_1<int32_t>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>, 0x18>(this);
}
constexpr void System::Linq::Set_1<int32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<int32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Linq::Set_1<int32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Linq::Set_1<int32_t>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Set_1<int32_t>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Linq::Set_1<int32_t>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Linq::Set_1<int32_t>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t>* System::Linq::Set_1<int32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<int32_t>*> System::Linq::Set_1<int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x28>(this);
}
inline ::System::Linq::Set_1<int32_t>* System::Linq::Set_1<int32_t>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<int32_t>*>(comparer));
}
inline void System::Linq::Set_1<int32_t>::_ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
inline bool System::Linq::Set_1<int32_t>::Add(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<int32_t>::Remove(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline bool System::Linq::Set_1<int32_t>::Find(int32_t  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
inline void System::Linq::Set_1<int32_t>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Linq::Set_1<int32_t>::InternalGetHashCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<int32_t>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Set_1<TElement>::__set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Set_1<TElement>::__get_buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Set_1<TElement>::__get_buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Set_1<TElement>::__set_slots(::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>, 0x18>(this, std::forward<::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>& System::Linq::Set_1<TElement>::__get_slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*> const& System::Linq::Set_1<TElement>::__get_slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Set_1<TElement>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t& System::Linq::Set_1<TElement>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t const& System::Linq::Set_1<TElement>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Set_1<TElement>::__set_freeList(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t& System::Linq::Set_1<TElement>::__get_freeList()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t const& System::Linq::Set_1<TElement>::__get_freeList() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Set_1<TElement>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TElement>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<TElement>*, 0x28>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<TElement>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>* System::Linq::Set_1<TElement>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TElement>*> System::Linq::Set_1<TElement>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TElement>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline ::System::Linq::Set_1<TElement>* System::Linq::Set_1<TElement>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Set_1<TElement>*>(comparer));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::Set_1<TElement>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline bool System::Linq::Set_1<TElement>::Add(TElement  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline bool System::Linq::Set_1<TElement>::Remove(TElement  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline bool System::Linq::Set_1<TElement>::Find(TElement  value, bool  add)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, add);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::Set_1<TElement>::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline int32_t System::Linq::Set_1<TElement>::InternalGetHashCode(TElement  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Set_1<TElement>*>::get(),
                            "InternalGetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
