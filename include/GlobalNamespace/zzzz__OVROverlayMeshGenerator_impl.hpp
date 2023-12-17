#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
constexpr void GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__OVROverlayMeshGenerator__CubeFace(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Right{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Left{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Top{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Bottom{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Front{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Back{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::COUNT{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x274a6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.SetOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay*)>(&::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274a818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "SetOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetBoundingRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVROverlayMeshGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x274a820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetBoundingRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274a964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274a968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Update)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x274a96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.UpdateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x274af90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GenerateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, ::GlobalNamespace::__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x274b270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x274d010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetSphereUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereVert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x274d048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetSphereVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildSphere
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, float_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x274b5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildSphere",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x274d09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetCubeUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeVert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x274d1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetCubeVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildCube
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x274bd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildCube",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x274c290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildHemicylinder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Rect, int32_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x274c9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildHemicylinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x274d2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Mesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x18>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::OVROverlayMeshGenerator::__get__Mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::OVROverlayMeshGenerator::__get__Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x18>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::OVROverlayMeshGenerator::__get__Verts()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::__get__Verts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GlobalNamespace::OVROverlayMeshGenerator::__get__UV()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> GlobalNamespace::OVROverlayMeshGenerator::__get__UV() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, 0x28>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Tris(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::OVROverlayMeshGenerator::__get__Tris()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> GlobalNamespace::OVROverlayMeshGenerator::__get__Tris() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Overlay(::GlobalNamespace::OVROverlay*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVROverlay*, 0x38>(this, std::forward<::GlobalNamespace::OVROverlay*>(value));
}
constexpr ::GlobalNamespace::OVROverlay* GlobalNamespace::OVROverlayMeshGenerator::__get__Overlay()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVROverlay*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> GlobalNamespace::OVROverlayMeshGenerator::__get__Overlay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVROverlay*, 0x38>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshFilter(::UnityEngine::MeshFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter*, 0x40>(this, std::forward<::UnityEngine::MeshFilter*>(value));
}
constexpr ::UnityEngine::MeshFilter* GlobalNamespace::OVROverlayMeshGenerator::__get__MeshFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> GlobalNamespace::OVROverlayMeshGenerator::__get__MeshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x40>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshCollider(::UnityEngine::MeshCollider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshCollider*, 0x48>(this, std::forward<::UnityEngine::MeshCollider*>(value));
}
constexpr ::UnityEngine::MeshCollider* GlobalNamespace::OVROverlayMeshGenerator::__get__MeshCollider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> GlobalNamespace::OVROverlayMeshGenerator::__get__MeshCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider*, 0x48>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x50>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::OVROverlayMeshGenerator::__get__MeshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::OVROverlayMeshGenerator::__get__MeshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x50>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__CameraRoot(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVROverlayMeshGenerator::__get__CameraRoot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVROverlayMeshGenerator::__get__CameraRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x60>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVROverlayMeshGenerator::__get__Transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVROverlayMeshGenerator::__get__Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastShape(::GlobalNamespace::__OVROverlay__OverlayShape  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0x68>(this, std::forward<::GlobalNamespace::__OVROverlay__OverlayShape>(value));
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& GlobalNamespace::OVROverlayMeshGenerator::__get__LastShape()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0x68>(this);
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastShape() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVROverlay__OverlayShape, 0x68>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x6c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__get__LastPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x6c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x6c>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x78>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVROverlayMeshGenerator::__get__LastRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x78>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x78>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastScale(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x88>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__get__LastScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectLeft(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x94>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x94>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x94>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectRight(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0xa4>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xa4>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xa4>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastSrcRectLeft(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0xb4>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastSrcRectLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xb4>(this);
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastSrcRectLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0xb4>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastTexture(::UnityEngine::Texture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture*, 0xc8>(this, std::forward<::UnityEngine::Texture*>(value));
}
constexpr ::UnityEngine::Texture* GlobalNamespace::OVROverlayMeshGenerator::__get__LastTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> GlobalNamespace::OVROverlayMeshGenerator::__get__LastTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0xc8>(this);
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Awake(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVROverlayMeshGenerator::__get__Awake()  {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr bool const& GlobalNamespace::OVROverlayMeshGenerator::__get__Awake() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_BottomLeft(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "BottomLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_BottomLeft()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "BottomLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_RightVector(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "RightVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_RightVector()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "RightVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_UpVector(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "UpVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_UpVector()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, "UpVector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::SetOverlay(::GlobalNamespace::OVROverlay*  overlay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "SetOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, overlay);
}
inline ::UnityEngine::Rect GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect(::UnityEngine::Rect  a, ::UnityEngine::Rect  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetBoundingRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(*this, ___internal_method, a, b);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh(::GlobalNamespace::__OVROverlay__OverlayShape  shape, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shape, position, rotation, scale, rect);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<int32_t>*  tris, ::GlobalNamespace::__OVROverlay__OverlayShape  shape, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uvs, tris, shape, position, rotation, scale, rect);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV(float_t  theta, float_t  phi, float_t  expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetSphereUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, theta, phi, expand_coef);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert(float_t  theta, float_t  phi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetSphereVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, theta, phi);
}
/// @param worldScale: float_t (default: 800.0)
/// @param latitudes: int32_t (default: static_cast<int32_t>(0x80))
/// @param longitudes: int32_t (default: static_cast<int32_t>(0x80))
/// @param expand_coef: float_t (default: 1.0)
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect, float_t  worldScale, int32_t  latitudes, int32_t  longitudes, float_t  expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildSphere",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expand_coef);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  face, ::UnityEngine::Vector2  sideUV, float_t  expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetCubeUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace  face, ::UnityEngine::Vector2  sideUV, float_t  expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "GetCubeVert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
/// @param worldScale: float_t (default: 800.0)
/// @param subQuads: int32_t (default: static_cast<int32_t>(0x1))
/// @param expand_coef: float_t (default: 1.01)
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, float_t  worldScale, int32_t  subQuads, float_t  expand_coef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildCube",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, worldScale, subQuads, expand_coef);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, rect);
}
/// @param longitudes: int32_t (default: static_cast<int32_t>(0x80))
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::UnityEngine::Vector3  scale, ::UnityEngine::Rect  rect, int32_t  longitudes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            "BuildHemicylinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, scale, rect, longitudes);
}
inline ::GlobalNamespace::OVROverlayMeshGenerator* GlobalNamespace::OVROverlayMeshGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVROverlayMeshGenerator*>());
}
inline void GlobalNamespace::OVROverlayMeshGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
