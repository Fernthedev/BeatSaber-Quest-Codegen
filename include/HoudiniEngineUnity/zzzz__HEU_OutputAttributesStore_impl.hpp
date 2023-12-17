#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttributeDictionary_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttributesStore.SetAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttributesStore::*)(::HoudiniEngineUnity::HEU_OutputAttribute*)>(&::HoudiniEngineUnity::HEU_OutputAttributesStore::SetAttribute)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2183a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "SetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_OutputAttribute*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttributesStore.GetAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_OutputAttribute* (::HoudiniEngineUnity::HEU_OutputAttributesStore::*)(::StringW)>(&::HoudiniEngineUnity::HEU_OutputAttributesStore::GetAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2183b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttributesStore.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttributesStore::*)()>(&::HoudiniEngineUnity::HEU_OutputAttributesStore::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2183b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttributesStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttributesStore::*)()>(&::HoudiniEngineUnity::HEU_OutputAttributesStore::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2183be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_OutputAttributesStore::__set__attributes(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*, 0x18>(this, std::forward<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* HoudiniEngineUnity::HEU_OutputAttributesStore::__get__attributes()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*> HoudiniEngineUnity::HEU_OutputAttributesStore::__get__attributes() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*, 0x18>(this);
}
inline void HoudiniEngineUnity::HEU_OutputAttributesStore::SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "SetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_OutputAttribute*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attribute);
}
inline ::HoudiniEngineUnity::HEU_OutputAttribute* HoudiniEngineUnity::HEU_OutputAttributesStore::GetAttribute(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_OutputAttribute*, false>(*this, ___internal_method, name);
}
inline void HoudiniEngineUnity::HEU_OutputAttributesStore::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_OutputAttributesStore* HoudiniEngineUnity::HEU_OutputAttributesStore::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_OutputAttributesStore*>());
}
inline void HoudiniEngineUnity::HEU_OutputAttributesStore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributesStore*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
