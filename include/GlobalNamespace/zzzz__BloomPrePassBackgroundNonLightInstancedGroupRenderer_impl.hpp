#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightInstancedGroupRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightInstancedGroupRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::*)()>(&::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210583c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__set_propertyType(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, 0x10>(this, std::forward<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, 0x10>(this);
}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__set_propertyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__set_propertyId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::__get_propertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty* GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>());
}
inline void GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::Float{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::Vector{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::Color{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType  GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType::Matrix4x4{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2104a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.InitIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2104a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "InitIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x2104d04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedMatrixArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21053c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedMatrixArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedFloatArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2105580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedFloatArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedVectorArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21054a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedVectorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.AutoFillRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x210565c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "AutoFillRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21056ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__renderers(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__renderers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*> const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__renderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*,::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__supportedProperties(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__supportedProperties()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*> const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__supportedProperties() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>, 0x28>(this);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::setStaticF__worldSpaceCameraPosID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_worldSpaceCameraPosID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::getStaticF__worldSpaceCameraPosID()  {
return ::cordl_internals::getStaticField<int32_t, "_worldSpaceCameraPosID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get>();
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableFloatArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableFloatArrays()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableFloatArrays() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableVectorArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*, 0x38>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableVectorArrays()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableVectorArrays() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>*, 0x38>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableMatrixArrays(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*, 0x40>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableMatrixArrays()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableMatrixArrays() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>>*, 0x40>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableArraysSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableArraysSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableArraysSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::CommandBuffer*, 0x50>(this, std::forward<::UnityEngine::Rendering::CommandBuffer*>(value));
}
constexpr ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__commandBuffer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CommandBuffer*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__commandBuffer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CommandBuffer*, 0x50>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableSetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x58>(this, std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
constexpr ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableSetMaterialPropertyBlock()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableSetMaterialPropertyBlock() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x58>(this);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__set__reusableGetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x60>(this, std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
constexpr ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableGetMaterialPropertyBlock()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__get__reusableGetMaterialPropertyBlock() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x60>(this);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "InitIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dest, viewMatrix, projectionMatrix);
}
inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedMatrixArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>, false>(*this, ___internal_method, propertyName);
}
inline ::ArrayW<float_t,::Array<float_t>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedFloatArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method, propertyName);
}
inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "GetCachedVectorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, false>(*this, ___internal_method, propertyName);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            "AutoFillRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
