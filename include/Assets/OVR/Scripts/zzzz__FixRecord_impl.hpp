#pragma once
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixRecord_def.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::FixRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::FixRecord::*)(int32_t, ::StringW, ::StringW, ::Assets::OVR::Scripts::FixMethodDelegate*, ::UnityEngine::Object*, bool, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::Assets::OVR::Scripts::FixRecord::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27f874c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixRecord*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Assets::OVR::Scripts::FixRecord::__set_fixMethod(::Assets::OVR::Scripts::FixMethodDelegate*  value)  {
::cordl_internals::setInstanceField<::Assets::OVR::Scripts::FixMethodDelegate*, 0x28>(this, std::forward<::Assets::OVR::Scripts::FixMethodDelegate*>(value));
}
constexpr ::Assets::OVR::Scripts::FixMethodDelegate* Assets::OVR::Scripts::FixRecord::__get_fixMethod()  {
return ::cordl_internals::getInstanceField<::Assets::OVR::Scripts::FixMethodDelegate*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Assets::OVR::Scripts::FixMethodDelegate*> Assets::OVR::Scripts::FixRecord::__get_fixMethod() const {
return ::cordl_internals::getInstanceField<::Assets::OVR::Scripts::FixMethodDelegate*, 0x28>(this);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_targetObject(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0x30>(this, std::forward<::UnityEngine::Object*>(value));
}
constexpr ::UnityEngine::Object* Assets::OVR::Scripts::FixRecord::__get_targetObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> Assets::OVR::Scripts::FixRecord::__get_targetObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x30>(this);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_buttonNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& Assets::OVR::Scripts::FixRecord::__get_buttonNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& Assets::OVR::Scripts::FixRecord::__get_buttonNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_editModeRequired(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__get_editModeRequired()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__get_editModeRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_complete(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__get_complete()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__get_complete() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
inline ::Assets::OVR::Scripts::FixRecord* Assets::OVR::Scripts::FixRecord::New_ctor(int32_t  order, ::StringW  cat, ::StringW  msg, ::Assets::OVR::Scripts::FixMethodDelegate*  fix, ::UnityEngine::Object*  target, bool  editRequired, ::ArrayW<::StringW,::Array<::StringW>*>  buttons)  {
return THROW_UNLESS(::il2cpp_utils::New<::Assets::OVR::Scripts::FixRecord*>(order, cat, msg, fix, target, editRequired, buttons));
}
inline void Assets::OVR::Scripts::FixRecord::_ctor(int32_t  order, ::StringW  cat, ::StringW  msg, ::Assets::OVR::Scripts::FixMethodDelegate*  fix, ::UnityEngine::Object*  target, bool  editRequired, ::ArrayW<::StringW,::Array<::StringW>*>  buttons)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixRecord*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, order, cat, msg, fix, target, editRequired, buttons);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
