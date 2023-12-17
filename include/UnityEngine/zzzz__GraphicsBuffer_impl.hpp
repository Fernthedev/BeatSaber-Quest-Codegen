#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
constexpr void UnityEngine::__GraphicsBuffer__Target::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__GraphicsBuffer__Target::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__GraphicsBuffer__Target::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__GraphicsBuffer__Target::__GraphicsBuffer__Target(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Vertex{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Index{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::CopySource{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::CopyDestination{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Structured{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Raw{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Append{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Counter{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::IndirectArguments{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::__GraphicsBuffer__Target  UnityEngine::__GraphicsBuffer__Target::Constant{static_cast<int32_t>(0x200)};
constexpr void UnityEngine::GraphicsBuffer::__set_m_Ptr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::GraphicsBuffer::__get_m_Ptr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::GraphicsBuffer::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
