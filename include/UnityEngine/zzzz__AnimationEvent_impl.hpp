#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimationEvent_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimationEvent::*)()>(&::UnityEngine::AnimationEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c905d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AnimationEvent::__set_m_Time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::AnimationEvent::__get_m_Time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& UnityEngine::AnimationEvent::__get_m_Time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_FunctionName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AnimationEvent::__get_m_FunctionName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::AnimationEvent::__get_m_FunctionName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_StringParameter(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AnimationEvent::__get_m_StringParameter()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::AnimationEvent::__get_m_StringParameter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_ObjectReferenceParameter(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0x28>(this, std::forward<::UnityEngine::Object*>(value));
}
constexpr ::UnityEngine::Object* UnityEngine::AnimationEvent::__get_m_ObjectReferenceParameter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> UnityEngine::AnimationEvent::__get_m_ObjectReferenceParameter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x28>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_FloatParameter(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::AnimationEvent::__get_m_FloatParameter()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& UnityEngine::AnimationEvent::__get_m_FloatParameter() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_IntParameter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AnimationEvent::__get_m_IntParameter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& UnityEngine::AnimationEvent::__get_m_IntParameter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_MessageOptions(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AnimationEvent::__get_m_MessageOptions()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& UnityEngine::AnimationEvent::__get_m_MessageOptions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_Source(::UnityEngine::AnimationEventSource  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationEventSource, 0x3c>(this, std::forward<::UnityEngine::AnimationEventSource>(value));
}
constexpr ::UnityEngine::AnimationEventSource& UnityEngine::AnimationEvent::__get_m_Source()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationEventSource, 0x3c>(this);
}
constexpr ::UnityEngine::AnimationEventSource const& UnityEngine::AnimationEvent::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationEventSource, 0x3c>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_StateSender(::UnityEngine::AnimationState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationState*, 0x40>(this, std::forward<::UnityEngine::AnimationState*>(value));
}
constexpr ::UnityEngine::AnimationState* UnityEngine::AnimationEvent::__get_m_StateSender()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationState*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationState*> UnityEngine::AnimationEvent::__get_m_StateSender() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationState*, 0x40>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorStateInfo(::UnityEngine::AnimatorStateInfo  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimatorStateInfo, 0x48>(this, std::forward<::UnityEngine::AnimatorStateInfo>(value));
}
constexpr ::UnityEngine::AnimatorStateInfo& UnityEngine::AnimationEvent::__get_m_AnimatorStateInfo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimatorStateInfo, 0x48>(this);
}
constexpr ::UnityEngine::AnimatorStateInfo const& UnityEngine::AnimationEvent::__get_m_AnimatorStateInfo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimatorStateInfo, 0x48>(this);
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorClipInfo(::UnityEngine::AnimatorClipInfo  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimatorClipInfo, 0x6c>(this, std::forward<::UnityEngine::AnimatorClipInfo>(value));
}
constexpr ::UnityEngine::AnimatorClipInfo& UnityEngine::AnimationEvent::__get_m_AnimatorClipInfo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimatorClipInfo, 0x6c>(this);
}
constexpr ::UnityEngine::AnimatorClipInfo const& UnityEngine::AnimationEvent::__get_m_AnimatorClipInfo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimatorClipInfo, 0x6c>(this);
}
inline ::UnityEngine::AnimationEvent* UnityEngine::AnimationEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AnimationEvent*>());
}
inline void UnityEngine::AnimationEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
