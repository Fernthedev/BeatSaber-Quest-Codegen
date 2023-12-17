#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b30cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b30d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            "get_HasNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode.get_HasPrev
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b30d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            "get_HasPrev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Next(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Next()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Next() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Prev(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x18>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Prev()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Prev() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, 0x18>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Value(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this, std::forward<double_t>(value));
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Value()  {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this);
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Value() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Point(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x28>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Point()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Point() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, 0x28>(this);
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__set_Triangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, 0x30>(this, std::forward<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(value));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Triangle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::__get_Triangle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, 0x30>(this);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(point));
}
inline void UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, point);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            "get_HasNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode::get_HasPrev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                            "get_HasPrev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
