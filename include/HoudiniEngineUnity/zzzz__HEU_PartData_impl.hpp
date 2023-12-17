#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_PartData__PartOutputType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_PartData__PartOutputType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_PartData__PartOutputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType::__HEU_PartData__PartOutputType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  HoudiniEngineUnity::__HEU_PartData__PartOutputType::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  HoudiniEngineUnity::__HEU_PartData__PartOutputType::MESH{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  HoudiniEngineUnity::__HEU_PartData__PartOutputType::VOLUME{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  HoudiniEngineUnity::__HEU_PartData__PartOutputType::CURVE{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  HoudiniEngineUnity::__HEU_PartData__PartOutputType::INSTANCER{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c::*)()>(&::HoudiniEngineUnity::__HEU_PartData____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217f480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c._CopyGameObjectComponents_b__85_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::__HEU_PartData____c::*)(::UnityEngine::LOD, ::UnityEngine::LOD)>(&::HoudiniEngineUnity::__HEU_PartData____c::_CopyGameObjectComponents_b__85_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x217f488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get(),
                            "<CopyGameObjectComponents>b__85_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get()}
                        )));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__HEU_PartData____c::setStaticF___9(::HoudiniEngineUnity::__HEU_PartData____c*  value)  {
::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_PartData____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get>(std::forward<::HoudiniEngineUnity::__HEU_PartData____c*>(value));
}
inline ::HoudiniEngineUnity::__HEU_PartData____c* HoudiniEngineUnity::__HEU_PartData____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_PartData____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_PartData____c::setStaticF___9__85_0(::System::Comparison_1<::UnityEngine::LOD>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::LOD>*, "<>9__85_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get>(std::forward<::System::Comparison_1<::UnityEngine::LOD>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::LOD>* HoudiniEngineUnity::__HEU_PartData____c::getStaticF___9__85_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::LOD>*, "<>9__85_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get>();
}
inline ::HoudiniEngineUnity::__HEU_PartData____c* HoudiniEngineUnity::__HEU_PartData____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_PartData____c*>());
}
inline void HoudiniEngineUnity::__HEU_PartData____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::__HEU_PartData____c::_CopyGameObjectComponents_b__85_0(::UnityEngine::LOD  a, ::UnityEngine::LOD  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c*>::get(),
                            "<CopyGameObjectComponents>b__85_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::*)()>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217d248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0._CopyChildGameObjects_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::*)(::UnityEngine::Transform*)>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::_CopyChildGameObjects_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x217f4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*>::get(),
                            "<CopyChildGameObjects>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::__get_previousTransformValues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::__get_previousTransformValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*>());
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0::_CopyChildGameObjects_b__0(::UnityEngine::Transform*  trans)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass86_0*>::get(),
                            "<CopyChildGameObjects>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trans);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::*)()>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217dcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0._BakePartToGameObject_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::*)(::UnityEngine::Transform*)>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::_BakePartToGameObject_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x217f5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*>::get(),
                            "<BakePartToGameObject>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::__get_previousTransformValues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::__get_previousTransformValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*>());
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0::_BakePartToGameObject_b__0(::UnityEngine::Transform*  trans)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_0*>::get(),
                            "<BakePartToGameObject>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trans);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::*)()>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217dcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1._BakePartToGameObject_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::*)(::UnityEngine::Transform*)>(&::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::_BakePartToGameObject_b__1)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x217f6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*>::get(),
                            "<BakePartToGameObject>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::__get_previousTransformValues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::__get_previousTransformValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
inline ::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1* HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*>());
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1::_BakePartToGameObject_b__1(::UnityEngine::Transform*  trans)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PartData____c__DisplayClass88_1*>::get(),
                            "<BakePartToGameObject>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trans);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_PartID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217879c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_PartName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_PartName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21787a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_PartName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ParentGeoNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_GeoNode* (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_ParentGeoNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21787ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ParentGeoNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ParentAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_ParentAsset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21787b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartInstancer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x217883c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsAttribInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsAttribInstancer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217884c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsAttribInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsInstancerAnyType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsInstancerAnyType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2178854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsInstancerAnyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartInstanced
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartInstanced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartInstanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetPartPointCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetPartPointCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetPartPointCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsObjectInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsObjectInstancer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsObjectInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ObjectInstancesBeenGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_ObjectInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ObjectInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.set_ObjectInstancesBeenGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::set_ObjectInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21788a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "set_ObjectInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x217618c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21788ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21788bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartEditable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartEditable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21788cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.HaveInstancesBeenGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::HaveInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21788d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "HaveInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_MeshVertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_MeshVertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21788dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_MeshVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_GeneratedOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_GeneratedOutput* (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_GeneratedOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21788e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_GeneratedOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_OutputGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_OutputGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21788ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_OutputGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2178910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, ::HoudiniEngineUnity::HEU_GeoNode*, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>, ::HoudiniEngineUnity::__HEU_PartData__PartOutputType, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::Initialize)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2178990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_PartData__PartOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetGameObjectName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::SetGameObjectName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2178b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_PartData::SetGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2178cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetVolumeLayerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::SetVolumeLayerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetVolumeLayerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetVolumeLayerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetVolumeLayerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetVolumeLayerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::DestroyAllData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2178cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ApplyHAPITransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_PartData::ApplyHAPITransform)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2178fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ApplyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetDebugInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Text::StringBuilder*)>(&::HoudiniEngineUnity::HEU_PartData::GetDebugInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2179130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetDebugInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsUsingMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(&::HoudiniEngineUnity::HEU_PartData::IsUsingMaterial)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x217935c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsUsingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetClonableObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_PartData::GetClonableObjects)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2179380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetClonableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetClonableParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*)>(&::HoudiniEngineUnity::HEU_PartData::GetClonableParts)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2179480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetOutputGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_PartData::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2179578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&::HoudiniEngineUnity::HEU_PartData::GetOutput)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2179678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData* (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_PartData::GetHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2179730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetObjectInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetObjectInstancer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21797b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetObjectInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearInstances)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2177984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearObjectInstanceInfos)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2178e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearInvalidObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearInvalidObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2177a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearInvalidObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21797c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedMeshOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedMeshOutput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21797d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedMeshOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedVolumeOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedVolumeOutput)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2179860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedVolumeOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GeneratePartInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_PartData::GeneratePartInstances)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x2179894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GeneratePartInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObjectID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectID)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x217742c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObjectID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ObjectNode*, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObject)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x217a4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObjectIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectIds)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x217619c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObjectIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromUnityAssetPathAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::StringW)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromUnityAssetPathAttribute)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x217679c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromUnityAssetPathAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CreateNewInstanceFromObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*, int32_t, ::UnityEngine::Transform*, ByRef<::HoudiniEngineUnity::HAPI_Transform>, int32_t, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::StringW,::Array<::StringW>*>, ::UnityEngine::GameObject*, bool)>(&::HoudiniEngineUnity::HEU_PartData::CreateNewInstanceFromObject)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x217a098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CreateNewInstanceFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_PartData::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x217aa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve* (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::GetCurve)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x217aab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetVisiblity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetVisiblity)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x217ab50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CalculateVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::CalculateVisibility)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x217ad28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetColliderState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x217ad58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CalculateColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::CalculateColliderState)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x217ad74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CopyGameObjectComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*, bool, ByRef<::StringW>, ByRef<::UnityEngine::Object*>, ::StringW, bool, bool, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*)>(&::HoudiniEngineUnity::HEU_PartData::CopyGameObjectComponents)> {
  constexpr static std::size_t size = 0x1de0;
  constexpr static std::size_t addrs = 0x217b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CopyGameObjectComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CopyChildGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*, bool, ByRef<::StringW>, ByRef<::UnityEngine::Object*>, ::StringW, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::CopyChildGameObjects)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x217ce2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CopyChildGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToNewGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::Transform*, bool, ByRef<::StringW>, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*, ByRef<::UnityEngine::Object*>, ::StringW, bool)>(&::HoudiniEngineUnity::HEU_PartData::BakePartToNewGameObject)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x217d250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToNewGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW, bool, bool, bool, bool, ByRef<::StringW>, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*, ByRef<::UnityEngine::Object*>, ::StringW, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::BakePartToGameObject)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x217d4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*, bool, bool, bool, ByRef<::StringW>, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*, ByRef<::UnityEngine::Object*>, ::StringW, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::BakePartToGameObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x217d3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::GenerateMesh)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x217469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ProcessCurvePart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_PartData::ProcessCurvePart)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x217dcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ProcessCurvePart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SyncAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>)>(&::HoudiniEngineUnity::HEU_PartData::SyncAttributesStore)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x217de00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SyncAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetupAttributeGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_PartData::SetupAttributeGeometry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2174c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetupAttributeGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::DestroyAttributesStore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2178ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.PopulateObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*)>(&::HoudiniEngineUnity::HEU_PartData::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2177dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*)>(&::HoudiniEngineUnity::HEU_PartData::SetObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x217ea30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217eb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CreateObjectInstanceInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectInstanceInfo* (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_PartData::CreateObjectInstanceInfo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x217a878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CreateObjectInstanceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfoWithObjectPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectInstanceInfo* (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectPath)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x217a7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfoWithObjectPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfoWithObjectID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectInstanceInfo* (::HoudiniEngineUnity::HEU_PartData::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2179fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfoWithObjectID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetTerrainOffsetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::Vector3)>(&::HoudiniEngineUnity::HEU_PartData::SetTerrainOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x217eba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetTerrainOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetTerrainData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::TerrainData*, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_PartData::SetTerrainData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x217ebb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetTerrainData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.AppendBakedCloneName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::AppendBakedCloneName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x217d390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "AppendBakedCloneName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x217ed50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*)>(&::HoudiniEngineUnity::HEU_PartData::DestroyParts)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x217edc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*)>(&::HoudiniEngineUnity::HEU_PartData::DestroyPart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2174a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_PartData*)>(&::HoudiniEngineUnity::HEU_PartData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x217ee94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_PartData*>"
constexpr  HoudiniEngineUnity::HEU_PartData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_PartData*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_PartData*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__partID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__get__partID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__get__partID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__partName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PartData::__get__partName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PartData::__get__partName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__objectNodeID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__get__objectNodeID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__get__objectNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__geoID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__get__geoID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__get__geoID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__partType(::HoudiniEngineUnity::HAPI_PartType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_PartType, 0x30>(this, std::forward<::HoudiniEngineUnity::HAPI_PartType>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_PartType& HoudiniEngineUnity::HEU_PartData::__get__partType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PartType, 0x30>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_PartType const& HoudiniEngineUnity::HEU_PartData::__get__partType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PartType, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__geoNode(::HoudiniEngineUnity::HEU_GeoNode*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GeoNode*, 0x38>(this, std::forward<::HoudiniEngineUnity::HEU_GeoNode*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GeoNode* HoudiniEngineUnity::HEU_PartData::__get__geoNode()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GeoNode*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeoNode*> HoudiniEngineUnity::HEU_PartData::__get__geoNode() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GeoNode*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__isAttribInstancer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__isAttribInstancer()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__isAttribInstancer() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__isPartInstanced(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__isPartInstanced()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__isPartInstanced() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__partPointCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__get__partPointCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__get__partPointCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__isObjectInstancer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__isObjectInstancer()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__isObjectInstancer() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__objectInstancesGenerated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__objectInstancesGenerated()  {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__objectInstancesGenerated() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__objectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* HoudiniEngineUnity::HEU_PartData::__get__objectInstanceInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*> HoudiniEngineUnity::HEU_PartData::__get__objectInstanceInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__terrainOffsetPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_PartData::__get__terrainOffsetPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_PartData::__get__terrainOffsetPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__assetDBTerrainData(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0x68>(this, std::forward<::UnityEngine::Object*>(value));
}
constexpr ::UnityEngine::Object* HoudiniEngineUnity::HEU_PartData::__get__assetDBTerrainData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> HoudiniEngineUnity::HEU_PartData::__get__assetDBTerrainData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__isPartEditable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__isPartEditable()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__isPartEditable() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__partOutputType(::HoudiniEngineUnity::__HEU_PartData__PartOutputType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_PartData__PartOutputType, 0x74>(this, std::forward<::HoudiniEngineUnity::__HEU_PartData__PartOutputType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType& HoudiniEngineUnity::HEU_PartData::__get__partOutputType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_PartData__PartOutputType, 0x74>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_PartData__PartOutputType const& HoudiniEngineUnity::HEU_PartData::__get__partOutputType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_PartData__PartOutputType, 0x74>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__curve(::HoudiniEngineUnity::HEU_Curve*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_Curve*, 0x78>(this, std::forward<::HoudiniEngineUnity::HEU_Curve*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_PartData::__get__curve()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Curve*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Curve*> HoudiniEngineUnity::HEU_PartData::__get__curve() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Curve*, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__attributesStore(::HoudiniEngineUnity::HEU_AttributesStore*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AttributesStore*, 0x80>(this, std::forward<::HoudiniEngineUnity::HEU_AttributesStore*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AttributesStore* HoudiniEngineUnity::HEU_PartData::__get__attributesStore()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AttributesStore*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_AttributesStore*> HoudiniEngineUnity::HEU_PartData::__get__attributesStore() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AttributesStore*, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__haveInstancesBeenGenerated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__get__haveInstancesBeenGenerated()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__get__haveInstancesBeenGenerated() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__meshVertexCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__get__meshVertexCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__get__meshVertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GeneratedOutput*, 0x90>(this, std::forward<::HoudiniEngineUnity::HEU_GeneratedOutput*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput* HoudiniEngineUnity::HEU_PartData::__get__generatedOutput()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GeneratedOutput*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutput*> HoudiniEngineUnity::HEU_PartData::__get__generatedOutput() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GeneratedOutput*, 0x90>(this);
}
constexpr void HoudiniEngineUnity::HEU_PartData::__set__volumeLayerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PartData::__get__volumeLayerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PartData::__get__volumeLayerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this);
}
inline int32_t HoudiniEngineUnity::HEU_PartData::get_PartID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::get_PartName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_PartName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeoNode* HoudiniEngineUnity::HEU_PartData::get_ParentGeoNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ParentGeoNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_GeoNode*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_PartData::get_ParentAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartInstancer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsAttribInstancer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsAttribInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsInstancerAnyType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsInstancerAnyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartInstanced()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartInstanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PartData::GetPartPointCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetPartPointCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsObjectInstancer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsObjectInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::get_ObjectInstancesBeenGenerated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_ObjectInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::set_ObjectInstancesBeenGenerated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "set_ObjectInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartEditable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsPartEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::HaveInstancesBeenGenerated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "HaveInstancesBeenGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PartData::get_MeshVertexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_MeshVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeneratedOutput* HoudiniEngineUnity::HEU_PartData::get_GeneratedOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_GeneratedOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_GeneratedOutput*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_PartData::get_OutputGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "get_OutputGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_PartData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_PartData*>());
}
inline void HoudiniEngineUnity::HEU_PartData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::Initialize(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  partID, int32_t  geoID, int32_t  objectNodeID, ::HoudiniEngineUnity::HEU_GeoNode*  geoNode, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>  partInfo, ::HoudiniEngineUnity::__HEU_PartData__PartOutputType  partOutputType, bool  isEditable, bool  isObjectInstancer, bool  isAttribInstancer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_PartData__PartOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, partID, geoID, objectNodeID, geoNode, partInfo, partOutputType, isEditable, isObjectInstancer, isAttribInstancer);
}
inline void HoudiniEngineUnity::HEU_PartData::SetGameObjectName(::StringW  partName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, partName);
}
inline void HoudiniEngineUnity::HEU_PartData::SetGameObject(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameObject);
}
inline void HoudiniEngineUnity::HEU_PartData::SetVolumeLayerName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetVolumeLayerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::GetVolumeLayerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetVolumeLayerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyAllData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ApplyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform>  hapiTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ApplyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hapiTransform);
}
inline void HoudiniEngineUnity::HEU_PartData::GetDebugInfo(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetDebugInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sb);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData*  materialData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsUsingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, materialData);
}
inline void HoudiniEngineUnity::HEU_PartData::GetClonableObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  clonableObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetClonableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clonableObjects);
}
inline void HoudiniEngineUnity::HEU_PartData::GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*  clonableParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clonableParts);
}
inline void HoudiniEngineUnity::HEU_PartData::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outputObjects);
}
inline void HoudiniEngineUnity::HEU_PartData::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*  outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outputs);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_PartData::GetHDAPartWithGameObject(::UnityEngine::GameObject*  inGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData*, false>(*this, ___internal_method, inGameObject);
}
inline void HoudiniEngineUnity::HEU_PartData::SetObjectInstancer(bool  bObjectInstancer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetObjectInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bObjectInstancer);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearInstances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearObjectInstanceInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearInvalidObjectInstanceInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearInvalidObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedMeshOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedMeshOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedVolumeOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ClearGeneratedVolumeOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GeneratePartInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectID(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  objectNodeID, ::ArrayW<::StringW,::Array<::StringW>*>  instancePrefixes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObjectID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, objectNodeID, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObject(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_ObjectNode*  sourceObject, ::ArrayW<::StringW,::Array<::StringW>*>  instancePrefixes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, sourceObject, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectIds(::HoudiniEngineUnity::HEU_SessionBase*  session, ::ArrayW<::StringW,::Array<::StringW>*>  instancePrefixes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromObjectIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromUnityAssetPathAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, ::StringW  unityInstanceAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateInstancesFromUnityAssetPathAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, unityInstanceAttr);
}
/// @param copyParentFlags: bool (default: true)
inline void HoudiniEngineUnity::HEU_PartData::CreateNewInstanceFromObject(::UnityEngine::GameObject*  sourceObject, int32_t  instanceIndex, ::UnityEngine::Transform*  parentTransform, ByRef<::HoudiniEngineUnity::HAPI_Transform>  hapiTransform, int32_t  instancedObjectNodeID, ::StringW  instancedObjectPath, ::UnityEngine::Vector3  rotationOffset, ::UnityEngine::Vector3  scaleOffset, ::ArrayW<::StringW,::Array<::StringW>*>  instancePrefixes, ::UnityEngine::GameObject*  collisionSrcGO, bool  copyParentFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CreateNewInstanceFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sourceObject, instanceIndex, parentTransform, hapiTransform, instancedObjectNodeID, instancedObjectPath, rotationOffset, scaleOffset, instancePrefixes, collisionSrcGO, copyParentFlags);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_PartData::GetCurve(bool  bEditableOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve*, false>(*this, ___internal_method, bEditableOnly);
}
inline void HoudiniEngineUnity::HEU_PartData::SetVisiblity(bool  bVisibility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bVisibility);
}
inline void HoudiniEngineUnity::HEU_PartData::CalculateVisibility(bool  bParentVisibility, bool  bParentDisplayGeo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bParentVisibility, bParentDisplayGeo);
}
inline void HoudiniEngineUnity::HEU_PartData::SetColliderState(bool  bEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bEnabled);
}
inline void HoudiniEngineUnity::HEU_PartData::CalculateColliderState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::CopyGameObjectComponents(::HoudiniEngineUnity::HEU_PartData*  partData, ::UnityEngine::GameObject*  sourceGO, ::UnityEngine::GameObject*  targetGO, ::StringW  assetName, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*  sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*  sourceToCopiedMaterials, bool  bWriteMeshesToAssetDatabase, ByRef<::StringW>  bakedAssetPath, ByRef<::UnityEngine::Object*>  assetDBObject, ::StringW  assetObjectFileName, bool  bDeleteExistingComponents, bool  bDontDeletePersistantResources, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  lodTransformValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CopyGameObjectComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources, lodTransformValues);
}
inline void HoudiniEngineUnity::HEU_PartData::CopyChildGameObjects(::HoudiniEngineUnity::HEU_PartData*  partData, ::UnityEngine::GameObject*  sourceGO, ::UnityEngine::GameObject*  targetGO, ::StringW  assetName, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*  sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*  sourceToCopiedMaterials, bool  bWriteMeshesToAssetDatabase, ByRef<::StringW>  bakedAssetPath, ByRef<::UnityEngine::Object*>  assetDBObject, ::StringW  assetObjectFileName, bool  bDeleteExistingComponents, bool  bDontDeletePersistantResources, bool  bKeepPreviousTransformValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CopyChildGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources, bKeepPreviousTransformValues);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_PartData::BakePartToNewGameObject(::UnityEngine::Transform*  parentTransform, bool  bWriteMeshesToAssetDatabase, ByRef<::StringW>  bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*  sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*  sourceToCopiedMaterials, ByRef<::UnityEngine::Object*>  assetDBObject, ::StringW  assetObjectFileName, bool  bReconnectPrefabInstances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToNewGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, parentTransform, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances);
}
inline void HoudiniEngineUnity::HEU_PartData::BakePartToGameObject(::HoudiniEngineUnity::HEU_PartData*  partData, ::UnityEngine::GameObject*  srcGO, ::UnityEngine::GameObject*  targetGO, ::StringW  assetName, bool  bIsInstancer, bool  bDeleteExistingComponents, bool  bDontDeletePersistantResources, bool  bWriteMeshesToAssetDatabase, ByRef<::StringW>  bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*  sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*  sourceToCopiedMaterials, ByRef<::UnityEngine::Object*>  assetDBObject, ::StringW  assetObjectFileName, bool  bReconnectPrefabInstances, bool  bKeepPreviousTransformValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, srcGO, targetGO, assetName, bIsInstancer, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances, bKeepPreviousTransformValues);
}
inline void HoudiniEngineUnity::HEU_PartData::BakePartToGameObject(::UnityEngine::GameObject*  targetGO, bool  bDeleteExistingComponents, bool  bDontDeletePersistantResources, bool  bWriteMeshesToAssetDatabase, ByRef<::StringW>  bakedAssetPath, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*  sourceToTargetMeshMap, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*  sourceToCopiedMaterials, ByRef<::UnityEngine::Object*>  assetDBObject, ::StringW  assetObjectFileName, bool  bReconnectPrefabInstances, bool  bKeepPreviousTransformValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "BakePartToGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*,::UnityEngine::Mesh*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*,::UnityEngine::Material*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, targetGO, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances, bKeepPreviousTransformValues);
}
inline bool HoudiniEngineUnity::HEU_PartData::GenerateMesh(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bUseLODGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups);
}
inline void HoudiniEngineUnity::HEU_PartData::ProcessCurvePart(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ProcessCurvePart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::SyncAttributesStore(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>  partInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SyncAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, geoID, partInfo);
}
inline void HoudiniEngineUnity::HEU_PartData::SetupAttributeGeometry(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetupAttributeGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyAttributesStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*  objInstanceInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, objInstanceInfos);
}
inline void HoudiniEngineUnity::HEU_PartData::SetObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*  sourceObjectInstanceInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sourceObjectInstanceInfos);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* HoudiniEngineUnity::HEU_PartData::CreateObjectInstanceInfo(::UnityEngine::GameObject*  instancedObject, int32_t  instancedObjectNodeID, ::StringW  instancedObjectPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "CreateObjectInstanceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, false>(*this, ___internal_method, instancedObject, instancedObjectNodeID, instancedObjectPath);
}
inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfoWithObjectPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, false>(*this, ___internal_method, path);
}
inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectID(int32_t  objNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "GetObjectInstanceInfoWithObjectID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, false>(*this, ___internal_method, objNodeID);
}
inline void HoudiniEngineUnity::HEU_PartData::SetTerrainOffsetPosition(::UnityEngine::Vector3  offsetPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetTerrainOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offsetPosition);
}
inline void HoudiniEngineUnity::HEU_PartData::SetTerrainData(::UnityEngine::TerrainData*  terrainData, ::StringW  exportPathRelative, ::StringW  exportPathUser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "SetTerrainData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, terrainData, exportPathRelative, exportPathUser);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::AppendBakedCloneName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "AppendBakedCloneName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*  parts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parts);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyPart(::HoudiniEngineUnity::HEU_PartData*  part)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "DestroyPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, part);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsEquivalentTo(::HoudiniEngineUnity::HEU_PartData*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
