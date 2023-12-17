#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
constexpr void UnityEngine::UIElements::__TextureRegistry__TextureInfo::__set_texture(::UnityEngine::Texture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture*>(value));
}
constexpr ::UnityEngine::Texture* UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_texture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_texture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__TextureRegistry__TextureInfo::__set_dynamic(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_dynamic()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_dynamic() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__TextureRegistry__TextureInfo::__set_refCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_refCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__TextureRegistry__TextureInfo::__get_refCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__TextureRegistry__TextureInfo::__TextureRegistry__TextureInfo(::UnityEngine::Texture*  texture, bool  dynamic, int32_t  refCount) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->texture = texture;
this->dynamic = dynamic;
this->refCount = refCount;
}
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextureRegistry* (*)()>(&::UnityEngine::UIElements::TextureRegistry::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e7c560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.GetTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::TextureRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2e7c5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.AllocAndAcquireDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)()>(&::UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e7c6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "AllocAndAcquireDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.UpdateDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId, ::UnityEngine::Texture*)>(&::UnityEngine::UIElements::TextureRegistry::UpdateDynamic)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2e7c970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "UpdateDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.AllocAndAcquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::Texture*, bool)>(&::UnityEngine::UIElements::TextureRegistry::AllocAndAcquire)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2e7c710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "AllocAndAcquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::Texture*)>(&::UnityEngine::UIElements::TextureRegistry::Acquire)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2e7cb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::TextureRegistry::Release)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2e7cc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)()>(&::UnityEngine::UIElements::TextureRegistry::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e7ce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_Textures(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>* UnityEngine::UIElements::TextureRegistry::__get_m_Textures()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*> UnityEngine::UIElements::TextureRegistry::__get_m_Textures() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_TextureToId(::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>* UnityEngine::UIElements::TextureRegistry::__get_m_TextureToId()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*> UnityEngine::UIElements::TextureRegistry::__get_m_TextureToId() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*,::UnityEngine::UIElements::TextureId>*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::TextureRegistry::__set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*, 0x20>(this, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* UnityEngine::UIElements::TextureRegistry::__get_m_FreeIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*> UnityEngine::UIElements::TextureRegistry::__get_m_FreeIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*, 0x20>(this);
}
inline void UnityEngine::UIElements::TextureRegistry::setStaticF__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::TextureRegistry*, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get>(std::forward<::UnityEngine::UIElements::TextureRegistry*>(value));
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TextureRegistry*, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get>();
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureRegistry*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Texture* UnityEngine::UIElements::TextureRegistry::GetTexture(::UnityEngine::UIElements::TextureId  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "GetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture*, false>(*this, ___internal_method, id);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "AllocAndAcquireDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TextureRegistry::UpdateDynamic(::UnityEngine::UIElements::TextureId  id, ::UnityEngine::Texture*  texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "UpdateDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, texture);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquire(::UnityEngine::Texture*  texture, bool  dynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "AllocAndAcquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId, false>(*this, ___internal_method, texture, dynamic);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::Acquire(::UnityEngine::Texture*  tex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId, false>(*this, ___internal_method, tex);
}
inline void UnityEngine::UIElements::TextureRegistry::Release(::UnityEngine::UIElements::TextureId  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id);
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TextureRegistry*>());
}
inline void UnityEngine::UIElements::TextureRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextureRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
