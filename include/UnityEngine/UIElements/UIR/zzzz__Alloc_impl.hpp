#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_start(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::Alloc::__get_start()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::Alloc::__get_start() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_size(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::Alloc::__get_size()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::Alloc::__get_size() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_handle(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UIElements::UIR::Alloc::__get_handle()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UIElements::UIR::Alloc::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_shortLived(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::UIR::Alloc::__get_shortLived()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UIElements::UIR::Alloc::__get_shortLived() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Alloc::Alloc(uint32_t  start, uint32_t  size, ::System::Object*  handle, bool  shortLived) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->start = start;
this->size = size;
this->handle = handle;
this->shortLived = shortLived;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
