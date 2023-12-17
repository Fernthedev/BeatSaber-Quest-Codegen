#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__ScaleVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector3Processor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::ScaleVector3Processor::*)(::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::ScaleVector3Processor::Process)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2af9cec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector3Processor.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::ScaleVector3Processor::*)()>(&::UnityEngine::InputSystem::Processors::ScaleVector3Processor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2af9d04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector3Processor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::ScaleVector3Processor::*)()>(&::UnityEngine::InputSystem::Processors::ScaleVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2af9dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Processors::ScaleVector3Processor::__set_x(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_x()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector3Processor::__set_y(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_y()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector3Processor::__set_z(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_z()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector3Processor::__get_z() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::ScaleVector3Processor::Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::ScaleVector3Processor::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::ScaleVector3Processor* UnityEngine::InputSystem::Processors::ScaleVector3Processor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>());
}
inline void UnityEngine::InputSystem::Processors::ScaleVector3Processor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector3Processor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
