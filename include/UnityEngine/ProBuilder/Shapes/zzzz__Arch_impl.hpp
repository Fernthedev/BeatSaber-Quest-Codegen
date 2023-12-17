#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Arch_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.CopyShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(&::UnityEngine::ProBuilder::Shapes::Arch::CopyShape)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b86d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.GetFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::ProBuilder::Shapes::Arch::GetFace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b86df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            "GetFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.RebuildMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x2b86ebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)()>(&::UnityEngine::ProBuilder::Shapes::Arch::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b87abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_Thickness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Thickness()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Thickness() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_NumberOfSides(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_NumberOfSides()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_NumberOfSides() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_ArchDegrees(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_ArchDegrees()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_ArchDegrees() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_EndCaps(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__get_m_EndCaps()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_EndCaps() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_Smooth(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Smooth()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Smooth() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
inline void UnityEngine::ProBuilder::Shapes::Arch::CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            "CopyShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Shapes::Shape*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shape);
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::Shapes::Arch::GetFace(::UnityEngine::Vector2  vertex1, ::UnityEngine::Vector2  vertex2, float_t  depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            "GetFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, false>(*this, ___internal_method, vertex1, vertex2, depth);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            "RebuildMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(*this, ___internal_method, mesh, size, rotation);
}
inline ::UnityEngine::ProBuilder::Shapes::Arch* UnityEngine::ProBuilder::Shapes::Arch::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Shapes::Arch*>());
}
inline void UnityEngine::ProBuilder::Shapes::Arch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
