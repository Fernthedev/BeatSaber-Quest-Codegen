#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
constexpr void GlobalNamespace::__BloomPrePass__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomPrePass__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BloomPrePass__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePass__Mode::__BloomPrePass__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BloomPrePass__Mode  GlobalNamespace::__BloomPrePass__Mode::RenderAndSetData{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BloomPrePass__Mode  GlobalNamespace::__BloomPrePass__Mode::SetDataOnly{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2102840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.LazyInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::LazyInit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2102844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2102a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPreRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPreRender)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2102b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnPreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.OnPostRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::OnPostRender)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2103d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnPostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass.SetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)(::GlobalNamespace::__BloomPrePass__Mode)>(&::GlobalNamespace::BloomPrePass::SetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2103db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePass__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePass::*)()>(&::GlobalNamespace::BloomPrePass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2103dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrepassRenderer(::GlobalNamespace::BloomPrePassRendererSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassRendererSO*, 0x18>(this, std::forward<::GlobalNamespace::BloomPrePassRendererSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassRendererSO* GlobalNamespace::BloomPrePass::__get__bloomPrepassRenderer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassRendererSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> GlobalNamespace::BloomPrePass::__get__bloomPrepassRenderer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassRendererSO*, 0x18>(this);
}
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x20>(this, std::forward<::GlobalNamespace::BloomPrePassEffectContainerSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO* GlobalNamespace::BloomPrePass::__get__bloomPrePassEffectContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> GlobalNamespace::BloomPrePass::__get__bloomPrePassEffectContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x20>(this);
}
constexpr void GlobalNamespace::BloomPrePass::__set__bloomPrePassRenderData(::GlobalNamespace::BloomPrePassRenderDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassRenderDataSO*, 0x28>(this, std::forward<::GlobalNamespace::BloomPrePassRenderDataSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO* GlobalNamespace::BloomPrePass::__get__bloomPrePassRenderData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassRenderDataSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRenderDataSO*> GlobalNamespace::BloomPrePass::__get__bloomPrePassRenderData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassRenderDataSO*, 0x28>(this);
}
constexpr void GlobalNamespace::BloomPrePass::__set__mode(::GlobalNamespace::__BloomPrePass__Mode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePass__Mode, 0x30>(this, std::forward<::GlobalNamespace::__BloomPrePass__Mode>(value));
}
constexpr ::GlobalNamespace::__BloomPrePass__Mode& GlobalNamespace::BloomPrePass::__get__mode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePass__Mode, 0x30>(this);
}
constexpr ::GlobalNamespace::__BloomPrePass__Mode const& GlobalNamespace::BloomPrePass::__get__mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePass__Mode, 0x30>(this);
}
constexpr void GlobalNamespace::BloomPrePass::__set__renderData(::GlobalNamespace::__BloomPrePassRenderDataSO__Data*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x38>(this, std::forward<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* GlobalNamespace::BloomPrePass::__get__renderData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> GlobalNamespace::BloomPrePass::__get__renderData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x38>(this);
}
inline void GlobalNamespace::BloomPrePass::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::LazyInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPreRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnPreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::OnPostRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "OnPostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePass::SetMode(::GlobalNamespace::__BloomPrePass__Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePass__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mode);
}
inline ::GlobalNamespace::BloomPrePass* GlobalNamespace::BloomPrePass::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePass*>());
}
inline void GlobalNamespace::BloomPrePass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePass*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
