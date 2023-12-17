#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Transform2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Transform2D::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b7c03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.TransformPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Transform2D::TransformPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b7c08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                            "TransformPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::Transform2D::*)()>(&::UnityEngine::ProBuilder::Transform2D::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2b7c0f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Transform2D::__set_position(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x10>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::Transform2D::__set_rotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ProBuilder::Transform2D::__get_rotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::ProBuilder::Transform2D::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void UnityEngine::ProBuilder::Transform2D::__set_scale(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x1c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__get_scale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1c>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__get_scale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1c>(this);
}
inline ::UnityEngine::ProBuilder::Transform2D* UnityEngine::ProBuilder::Transform2D::New_ctor(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Transform2D*>(position, rotation, scale));
}
inline void UnityEngine::ProBuilder::Transform2D::_ctor(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position, rotation, scale);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Transform2D::TransformPoint(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                            "TransformPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, p);
}
inline ::StringW UnityEngine::ProBuilder::Transform2D::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
