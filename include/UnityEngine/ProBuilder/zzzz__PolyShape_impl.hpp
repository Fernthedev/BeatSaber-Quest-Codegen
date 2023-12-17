#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
constexpr void UnityEngine::ProBuilder::__PolyShape__PolyEditMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::__PolyShape__PolyEditMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ProBuilder::__PolyShape__PolyEditMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode::__PolyShape__PolyEditMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  UnityEngine::ProBuilder::__PolyShape__PolyEditMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  UnityEngine::ProBuilder::__PolyShape__PolyEditMode::Path{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  UnityEngine::ProBuilder::__PolyShape__PolyEditMode::Height{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  UnityEngine::ProBuilder::__PolyShape__PolyEditMode::Edit{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_controlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_controlPoints)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b55e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_controlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.SetControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(&::UnityEngine::ProBuilder::PolyShape::SetControlPoints)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b55eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "SetControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_extrude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_extrude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_extrude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(float_t)>(&::UnityEngine::ProBuilder::PolyShape::set_extrude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_polyEditMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_polyEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_polyEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_polyEditMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode)>(&::UnityEngine::ProBuilder::PolyShape::set_polyEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_polyEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_flipNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_flipNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_flipNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_flipNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(bool)>(&::UnityEngine::ProBuilder::PolyShape::set_flipNormals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b55f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_flipNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh* (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::get_mesh)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b55f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.set_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::PolyShape::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape.IsSnapEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::IsSnapEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "IsSnapEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PolyShape._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::PolyShape::*)()>(&::UnityEngine::ProBuilder::PolyShape::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b55fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::PolyShape::__set_m_Mesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh*, 0x18>(this, std::forward<::UnityEngine::ProBuilder::ProBuilderMesh*>(value));
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh* UnityEngine::ProBuilder::PolyShape::__get_m_Mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> UnityEngine::ProBuilder::PolyShape::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh*, 0x18>(this);
}
constexpr void UnityEngine::ProBuilder::PolyShape::__set_m_Points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::PolyShape::__get_m_Points()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::PolyShape::__get_m_Points() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x20>(this);
}
constexpr void UnityEngine::ProBuilder::PolyShape::__set_m_Extrude(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ProBuilder::PolyShape::__get_m_Extrude()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& UnityEngine::ProBuilder::PolyShape::__get_m_Extrude() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void UnityEngine::ProBuilder::PolyShape::__set_m_EditMode(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, 0x2c>(this, std::forward<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode>(value));
}
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode& UnityEngine::ProBuilder::PolyShape::__get_m_EditMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, 0x2c>(this);
}
constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const& UnityEngine::ProBuilder::PolyShape::__get_m_EditMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, 0x2c>(this);
}
constexpr void UnityEngine::ProBuilder::PolyShape::__set_m_FlipNormals(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ProBuilder::PolyShape::__get_m_FlipNormals()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& UnityEngine::ProBuilder::PolyShape::__get_m_FlipNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void UnityEngine::ProBuilder::PolyShape::__set_isOnGrid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ProBuilder::PolyShape::__get_isOnGrid()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& UnityEngine::ProBuilder::PolyShape::__get_isOnGrid() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::PolyShape::get_controlPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_controlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>*, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::SetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "SetControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, points);
}
inline float_t UnityEngine::ProBuilder::PolyShape::get_extrude()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_extrude(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode UnityEngine::ProBuilder::PolyShape::get_polyEditMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_polyEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_polyEditMode(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_polyEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::PolyShape::get_flipNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_flipNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_flipNormals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_flipNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh* UnityEngine::ProBuilder::PolyShape::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh*, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PolyShape::set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::PolyShape::IsSnapEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            "IsSnapEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::PolyShape* UnityEngine::ProBuilder::PolyShape::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::PolyShape*>());
}
inline void UnityEngine::ProBuilder::PolyShape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::PolyShape*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
