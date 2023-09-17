#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Processors/zzzz__InvertVector2Processor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)(::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl)>(&::UnityEngine::InputSystem::Processors::InvertVector2Processor::Process)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2966a68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Processors::InvertVector2Processor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)()>(&::UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2966a8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Processors::InvertVector2Processor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)()>(&::UnityEngine::InputSystem::Processors::InvertVector2Processor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2966b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::InputSystem::Processors::InvertVector2Processor::__set_invertX(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertX() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Processors::InvertVector2Processor::__set_invertY(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertY() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Vector2 ::UnityEngine::InputSystem::Processors::InvertVector2Processor::Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::StringW ::UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::Processors::InvertVector2Processor::InvertVector2Processor()  : ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>(THROW_UNLESS(::il2cpp_utils::New<InvertVector2Processor>())) {}
 void ::UnityEngine::InputSystem::Processors::InvertVector2Processor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
