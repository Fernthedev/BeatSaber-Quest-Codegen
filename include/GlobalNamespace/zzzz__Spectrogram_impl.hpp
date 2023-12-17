#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Spectrogram_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.get_materialPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23b6cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23b6db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::Update)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x23b6ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b7048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Spectrogram::__set__setAsGlobal(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::Spectrogram::__get__setAsGlobal()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::Spectrogram::__get__setAsGlobal() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::Spectrogram::__set__meshRenderers(::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::Spectrogram::__get__meshRenderers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::Spectrogram::__get__meshRenderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::Spectrogram::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x28>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockController*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::Spectrogram::__get__materialPropertyBlockController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> GlobalNamespace::Spectrogram::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x28>(this);
}
constexpr void GlobalNamespace::Spectrogram::__set__spectrogramData(::GlobalNamespace::BasicSpectrogramData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicSpectrogramData*, 0x30>(this, std::forward<::GlobalNamespace::BasicSpectrogramData*>(value));
}
constexpr ::GlobalNamespace::BasicSpectrogramData* GlobalNamespace::Spectrogram::__get__spectrogramData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicSpectrogramData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> GlobalNamespace::Spectrogram::__get__spectrogramData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicSpectrogramData*, 0x30>(this);
}
inline void GlobalNamespace::Spectrogram::setStaticF__spectrogramDataID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Spectrogram::getStaticF__spectrogramDataID()  {
return ::cordl_internals::getStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>();
}
inline void GlobalNamespace::Spectrogram::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::Spectrogram::getStaticF__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>();
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::Spectrogram::get_materialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::Spectrogram::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::Spectrogram::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::Spectrogram* GlobalNamespace::Spectrogram::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Spectrogram*>());
}
inline void GlobalNamespace::Spectrogram::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
