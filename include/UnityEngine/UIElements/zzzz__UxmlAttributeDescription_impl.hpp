#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
constexpr void UnityEngine::UIElements::__UxmlAttributeDescription__Use::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__UxmlAttributeDescription__Use::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__UxmlAttributeDescription__Use::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use::__UxmlAttributeDescription__Use(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use  UnityEngine::UIElements::__UxmlAttributeDescription__Use::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use  UnityEngine::UIElements::__UxmlAttributeDescription__Use::Optional{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use  UnityEngine::UIElements::__UxmlAttributeDescription__Use::Prohibited{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use  UnityEngine::UIElements::__UxmlAttributeDescription__Use::Required{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlAttributeDescription::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e0e8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlAttributeDescription::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_obsoleteNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2e0e8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_obsoleteNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_typeNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_typeNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_use
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::__UxmlAttributeDescription__Use)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_use)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_use",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__UxmlAttributeDescription__Use>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_restriction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_restriction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_restriction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlTypeRestriction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetValueFromBagAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ByRef<::StringW>)>(&::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2e0e978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "TryGetValueFromBagAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set__name_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__get__name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set_m_ObsoleteNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::UIElements::UxmlAttributeDescription::__get_m_ObsoleteNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::UIElements::UxmlAttributeDescription::__get_m_ObsoleteNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set__type_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__get__type_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__get__type_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set__typeNamespace_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__get__typeNamespace_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__get__typeNamespace_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set__use_k__BackingField(::UnityEngine::UIElements::__UxmlAttributeDescription__Use  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__UxmlAttributeDescription__Use, 0x30>(this, std::forward<::UnityEngine::UIElements::__UxmlAttributeDescription__Use>(value));
}
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use& UnityEngine::UIElements::UxmlAttributeDescription::__get__use_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__UxmlAttributeDescription__Use, 0x30>(this);
}
constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const& UnityEngine::UIElements::UxmlAttributeDescription::__get__use_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__UxmlAttributeDescription__Use, 0x30>(this);
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__set__restriction_k__BackingField(::UnityEngine::UIElements::UxmlTypeRestriction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlTypeRestriction*, 0x38>(this, std::forward<::UnityEngine::UIElements::UxmlTypeRestriction*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction* UnityEngine::UIElements::UxmlAttributeDescription::__get__restriction_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlTypeRestriction*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlTypeRestriction*> UnityEngine::UIElements::UxmlAttributeDescription::__get__restriction_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlTypeRestriction*, 0x38>(this);
}
inline ::UnityEngine::UIElements::UxmlAttributeDescription* UnityEngine::UIElements::UxmlAttributeDescription::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlAttributeDescription*>());
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlAttributeDescription::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_obsoleteNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_type(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_typeNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_use(::UnityEngine::UIElements::__UxmlAttributeDescription__Use  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_use",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__UxmlAttributeDescription__Use>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "set_restriction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlTypeRestriction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                            "TryGetValueFromBagAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bag, cc, value);
}
template<typename T>
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::System::Func_3<::StringW,T,T>*  converterFunc, T  defaultValue, ByRef<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                        "TryGetValueFromBag",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::StringW,T,T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bag, cc, converterFunc, defaultValue, value);
}
template<typename T>
inline T UnityEngine::UIElements::UxmlAttributeDescription::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::System::Func_3<::StringW,T,T>*  converterFunc, T  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                        "GetValueFromBag",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::StringW,T,T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, bag, cc, converterFunc, defaultValue);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
