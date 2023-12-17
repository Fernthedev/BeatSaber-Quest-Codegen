#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_vertex(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_vertex()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_vertex() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_viewPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_viewPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_viewPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__BloomPrePassLight__VertexData::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_uv(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_uv()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_uv() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "vertex", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData::__BloomPrePassLight__VertexData(::UnityEngine::Vector3  vertex, ::UnityEngine::Vector3  viewPos, ::UnityEngine::Color  color, ::UnityEngine::Vector3  uv) noexcept : ::bs_hook::ValueTypeWrapper<0x34>() {this->vertex = vertex;
this->viewPos = viewPos;
this->color = color;
this->uv = uv;
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex0(::GlobalNamespace::__BloomPrePassLight__VertexData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BloomPrePassLight__VertexData>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex1(::GlobalNamespace::__BloomPrePassLight__VertexData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BloomPrePassLight__VertexData>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex2(::GlobalNamespace::__BloomPrePassLight__VertexData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BloomPrePassLight__VertexData>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex3(::GlobalNamespace::__BloomPrePassLight__VertexData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BloomPrePassLight__VertexData>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex3()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex3() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassLight__VertexData, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "vertex0", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex1", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex2", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex3", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassLight__QuadData::__BloomPrePassLight__QuadData(::GlobalNamespace::__BloomPrePassLight__VertexData  vertex0, ::GlobalNamespace::__BloomPrePassLight__VertexData  vertex1, ::GlobalNamespace::__BloomPrePassLight__VertexData  vertex2, ::GlobalNamespace::__BloomPrePassLight__VertexData  vertex3) noexcept : ::bs_hook::ValueTypeWrapper<0xd0>() {this->vertex0 = vertex0;
this->vertex1 = vertex1;
this->vertex2 = vertex2;
this->vertex3 = vertex3;
}
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassLight__LightsDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassLight__LightsDataItem::*)(::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*)>(&::GlobalNamespace::__BloomPrePassLight__LightsDataItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2106d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomPrePassLight__LightsDataItem::__set_lightType(::GlobalNamespace::BloomPrePassLightTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x10>(this, std::forward<::GlobalNamespace::BloomPrePassLightTypeSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO* GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lightType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lightType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomPrePassLight__LightsDataItem::__set_lights(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*, 0x18>(this, std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lights()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*> GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lights() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*, 0x18>(this);
}
inline ::GlobalNamespace::__BloomPrePassLight__LightsDataItem* GlobalNamespace::__BloomPrePassLight__LightsDataItem::New_ctor(::GlobalNamespace::BloomPrePassLightTypeSO*  lightType, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*  lights)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>(lightType, lights));
}
inline void GlobalNamespace::__BloomPrePassLight__LightsDataItem::_ctor(::GlobalNamespace::BloomPrePassLightTypeSO*  lightType, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*  lights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightType, lights);
}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_bloomLightsDict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>* (*)()>(&::GlobalNamespace::BloomPrePassLight::get_bloomLightsDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2106930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "get_bloomLightsDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_lightsDataItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* (*)()>(&::GlobalNamespace::BloomPrePassLight::get_lightsDataItems)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2106988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "get_lightsDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_isDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::get_isDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21069e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2106c98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2106d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.RegisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::RegisterLight)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x21069e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "RegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.UnregisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::UnregisterLight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2106c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "UnregisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.DidRegisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::DidRegisterLight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.FillMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)(ByRef<int32_t>, ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData,::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassLight::FillMeshData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2106d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassLight::__set__lightType(::GlobalNamespace::BloomPrePassLightTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x18>(this, std::forward<::GlobalNamespace::BloomPrePassLightTypeSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO* GlobalNamespace::BloomPrePassLight::__get__lightType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> GlobalNamespace::BloomPrePassLight::__get__lightType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x18>(this);
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__bloomLightsDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>* GlobalNamespace::BloomPrePassLight::getStaticF__bloomLightsDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__lightsDataItems(::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, "_lightsDataItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* GlobalNamespace::BloomPrePassLight::getStaticF__lightsDataItems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, "_lightsDataItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__registeredWithLightType(::GlobalNamespace::BloomPrePassLightTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x20>(this, std::forward<::GlobalNamespace::BloomPrePassLightTypeSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO* GlobalNamespace::BloomPrePassLight::__get__registeredWithLightType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> GlobalNamespace::BloomPrePassLight::__get__registeredWithLightType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightTypeSO*, 0x20>(this);
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isRegistered(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__get__isRegistered()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__get__isRegistered() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isBeingDestroyed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__get__isBeingDestroyed()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__get__isBeingDestroyed() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>* GlobalNamespace::BloomPrePassLight::get_bloomLightsDict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "get_bloomLightsDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*,::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* GlobalNamespace::BloomPrePassLight::get_lightsDataItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "get_lightsDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::BloomPrePassLight::get_isDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "get_isDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::RegisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "RegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::UnregisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "UnregisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::DidRegisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "DidRegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::FillMeshData(ByRef<int32_t>  lightNum, ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData,::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>  lightQuads, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix, float_t  lineWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "FillMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData,::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightNum, lightQuads, viewMatrix, projectionMatrix, lineWidth);
}
inline void GlobalNamespace::BloomPrePassLight::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassLight* GlobalNamespace::BloomPrePassLight::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassLight*>());
}
inline void GlobalNamespace::BloomPrePassLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
