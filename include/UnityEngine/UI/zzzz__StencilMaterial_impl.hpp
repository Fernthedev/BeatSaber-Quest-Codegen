#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__StencilMaterial_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/UI/zzzz__StencilMaterial_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::__StencilMaterial__MatEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__StencilMaterial__MatEntry::*)()>(&::UnityEngine::UI::__StencilMaterial__MatEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d8a7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__StencilMaterial__MatEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_baseMat(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x10>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::UI::__StencilMaterial__MatEntry::__get_baseMat()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::UI::__StencilMaterial__MatEntry::__get_baseMat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x10>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_customMat(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x18>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::UI::__StencilMaterial__MatEntry::__get_customMat()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::UI::__StencilMaterial__MatEntry::__get_customMat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x18>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__StencilMaterial__MatEntry::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_stencilId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__StencilMaterial__MatEntry::__get_stencilId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_stencilId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_operation(::UnityEngine::Rendering::StencilOp  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::StencilOp, 0x28>(this, std::forward<::UnityEngine::Rendering::StencilOp>(value));
}
constexpr ::UnityEngine::Rendering::StencilOp& UnityEngine::UI::__StencilMaterial__MatEntry::__get_operation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::StencilOp, 0x28>(this);
}
constexpr ::UnityEngine::Rendering::StencilOp const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_operation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::StencilOp, 0x28>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_compareFunction(::UnityEngine::Rendering::CompareFunction  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::CompareFunction, 0x2c>(this, std::forward<::UnityEngine::Rendering::CompareFunction>(value));
}
constexpr ::UnityEngine::Rendering::CompareFunction& UnityEngine::UI::__StencilMaterial__MatEntry::__get_compareFunction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CompareFunction, 0x2c>(this);
}
constexpr ::UnityEngine::Rendering::CompareFunction const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_compareFunction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CompareFunction, 0x2c>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_readMask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__StencilMaterial__MatEntry::__get_readMask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_readMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_writeMask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__StencilMaterial__MatEntry::__get_writeMask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_writeMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_useAlphaClip(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::__StencilMaterial__MatEntry::__get_useAlphaClip()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_useAlphaClip() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void UnityEngine::UI::__StencilMaterial__MatEntry::__set_colorMask(::UnityEngine::Rendering::ColorWriteMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::ColorWriteMask, 0x3c>(this, std::forward<::UnityEngine::Rendering::ColorWriteMask>(value));
}
constexpr ::UnityEngine::Rendering::ColorWriteMask& UnityEngine::UI::__StencilMaterial__MatEntry::__get_colorMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::ColorWriteMask, 0x3c>(this);
}
constexpr ::UnityEngine::Rendering::ColorWriteMask const& UnityEngine::UI::__StencilMaterial__MatEntry::__get_colorMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::ColorWriteMask, 0x3c>(this);
}
inline ::UnityEngine::UI::__StencilMaterial__MatEntry* UnityEngine::UI::__StencilMaterial__MatEntry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__StencilMaterial__MatEntry*>());
}
inline void UnityEngine::UI::__StencilMaterial__MatEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__StencilMaterial__MatEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int32_t)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d89da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d89dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.LogWarningWhenNotInBatchmode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d8a750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "LogWarningWhenNotInBatchmode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, int32_t, int32_t)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x2d89e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::UnityEngine::UI::StencilMaterial::Remove)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d8a7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.ClearAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UI::StencilMaterial::ClearAll)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d8a998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "ClearAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::StencilMaterial::setStaticF_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>*, "m_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>* UnityEngine::UI::StencilMaterial::getStaticF_m_List()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>*, "m_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get>();
}
inline ::UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material*  baseMat, int32_t  stencilID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, baseMat, stencilID);
}
inline ::UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material*  baseMat, int32_t  stencilID, ::UnityEngine::Rendering::StencilOp  operation, ::UnityEngine::Rendering::CompareFunction  compareFunction, ::UnityEngine::Rendering::ColorWriteMask  colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask);
}
inline void UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode(::StringW  warning, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "LogWarningWhenNotInBatchmode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, warning, context);
}
inline ::UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material*  baseMat, int32_t  stencilID, ::UnityEngine::Rendering::StencilOp  operation, ::UnityEngine::Rendering::CompareFunction  compareFunction, ::UnityEngine::Rendering::ColorWriteMask  colorWriteMask, int32_t  readMask, int32_t  writeMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask);
}
inline void UnityEngine::UI::StencilMaterial::Remove(::UnityEngine::Material*  customMat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customMat);
}
inline void UnityEngine::UI::StencilMaterial::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(),
                            "ClearAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
