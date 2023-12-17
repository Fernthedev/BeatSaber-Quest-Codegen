#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant.get_passType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PassType (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)()>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_passType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            "get_passType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant.get_keywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)()>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::*)(::UnityEngine::Rendering::PassType, ::StringW)>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x280bd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__set__passType(::UnityEngine::Rendering::PassType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::PassType, 0x10>(this, std::forward<::UnityEngine::Rendering::PassType>(value));
}
constexpr ::UnityEngine::Rendering::PassType& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__get__passType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::PassType, 0x10>(this);
}
constexpr ::UnityEngine::Rendering::PassType const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__get__passType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::PassType, 0x10>(this);
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__set__keywords(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__get__keywords()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::__get__keywords() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::UnityEngine::Rendering::PassType GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_passType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            "get_passType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PassType, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::get_keywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant* GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::New_ctor(::UnityEngine::Rendering::PassType  passType, ::StringW  keywords)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>(passType, keywords));
}
inline void GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant::_ctor(::UnityEngine::Rendering::PassType  passType, ::StringW  keywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, passType, keywords);
}
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant.get_variants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)()>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant.get_shader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)()>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_shader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            "get_shader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::*)(::UnityEngine::Shader*, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>)>(&::GlobalNamespace::__ShaderVariantsSO__ShaderVariant::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x280bcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__set__variants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>& GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__get__variants()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> const& GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__get__variants() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>, 0x10>(this);
}
constexpr void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__set__shader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x18>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__get__shader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::__ShaderVariantsSO__ShaderVariant::__get__shader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_variants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::Shader* GlobalNamespace::__ShaderVariantsSO__ShaderVariant::get_shader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            "get_shader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant* GlobalNamespace::__ShaderVariantsSO__ShaderVariant::New_ctor(::UnityEngine::Shader*  shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>  variants)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>(shader, variants));
}
inline void GlobalNamespace::__ShaderVariantsSO__ShaderVariant::_ctor(::UnityEngine::Shader*  shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>  variants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shader, variants);
}
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.get_shaderVariants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::get_shaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            "get_shaderVariants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>)>(&::GlobalNamespace::ShaderVariantsSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ShaderVariantsSO::__set__shaderVariants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>& GlobalNamespace::ShaderVariantsSO::__get__shaderVariants()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> const& GlobalNamespace::ShaderVariantsSO::__get__shaderVariants() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>, 0x18>(this);
}
inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> GlobalNamespace::ShaderVariantsSO::get_shaderVariants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            "get_shaderVariants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ShaderVariantsSO::Init(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>  shaderVariants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*,::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shaderVariants);
}
inline ::GlobalNamespace::ShaderVariantsSO* GlobalNamespace::ShaderVariantsSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ShaderVariantsSO*>());
}
inline void GlobalNamespace::ShaderVariantsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
