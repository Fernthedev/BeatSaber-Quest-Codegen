#pragma once
#include "GlobalNamespace/zzzz__OVRFace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
constexpr void GlobalNamespace::__OVRCustomFace__RetargetingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRCustomFace__RetargetingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRCustomFace__RetargetingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType::__OVRCustomFace__RetargetingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType  GlobalNamespace::__OVRCustomFace__RetargetingType::OculusFace{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType  GlobalNamespace::__OVRCustomFace__RetargetingType::Custom{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_Mappings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::get_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_Mappings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_Mappings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>)>(&::GlobalNamespace::OVRCustomFace::set_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_Mappings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_RetargetingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRCustomFace__RetargetingType (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::get_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_RetargetingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_RetargetingValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(::GlobalNamespace::__OVRCustomFace__RetargetingType)>(&::GlobalNamespace::OVRCustomFace::set_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_RetargetingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRCustomFace__RetargetingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_AllowDuplicateMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_AllowDuplicateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_AllowDuplicateMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(bool)>(&::GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27a8cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_AllowDuplicateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a8cb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetFaceExpression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRFaceExpressions__FaceExpression (::GlobalNamespace::OVRCustomFace::*)(int32_t)>(&::GlobalNamespace::OVRCustomFace::GetFaceExpression)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27a8d0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetCustomBlendShapeNameAndExpressionPairs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::ArrayW<::StringW,::Array<::StringW>*>,::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>> (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x27a8d3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27a8e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRCustomFace::__set__mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>& GlobalNamespace::OVRCustomFace::__get__mappings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>, 0x30>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> const& GlobalNamespace::OVRCustomFace::__get__mappings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>, 0x30>(this);
}
constexpr void GlobalNamespace::OVRCustomFace::__set_retargetingType(::GlobalNamespace::__OVRCustomFace__RetargetingType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRCustomFace__RetargetingType, 0x38>(this, std::forward<::GlobalNamespace::__OVRCustomFace__RetargetingType>(value));
}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType& GlobalNamespace::OVRCustomFace::__get_retargetingType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRCustomFace__RetargetingType, 0x38>(this);
}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType const& GlobalNamespace::OVRCustomFace::__get_retargetingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRCustomFace__RetargetingType, 0x38>(this);
}
constexpr void GlobalNamespace::OVRCustomFace::__set__allowDuplicateMapping(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRCustomFace::__get__allowDuplicateMapping()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::OVRCustomFace::__get__allowDuplicateMapping() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> GlobalNamespace::OVRCustomFace::get_Mappings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_Mappings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_Mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_Mappings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRCustomFace__RetargetingType GlobalNamespace::OVRCustomFace::get_RetargetingValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_RetargetingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRCustomFace__RetargetingType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_RetargetingValue(::GlobalNamespace::__OVRCustomFace__RetargetingType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_RetargetingValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRCustomFace__RetargetingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "get_AllowDuplicateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "set_AllowDuplicateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRCustomFace::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::OVRCustomFace::GetFaceExpression(int32_t  blendShapeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "GetFaceExpression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, false>(*this, ___internal_method, blendShapeIndex);
}
inline ::System::ValueTuple_2<::ArrayW<::StringW,::Array<::StringW>*>,::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>> GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            "GetCustomBlendShapeNameAndExpressionPairs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::StringW,::Array<::StringW>*>,::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRCustomFace* GlobalNamespace::OVRCustomFace::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRCustomFace*>());
}
inline void GlobalNamespace::OVRCustomFace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
