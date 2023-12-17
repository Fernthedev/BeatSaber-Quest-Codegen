#pragma once
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
constexpr void UnityEngine::Rendering::GraphicsDeviceType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::GraphicsDeviceType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::GraphicsDeviceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GraphicsDeviceType::GraphicsDeviceType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGL2{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D9{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D11{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation3{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Null{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Xbox360{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLES2{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLES3{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStationVita{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation4{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::XboxOne{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStationMobile{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Metal{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::OpenGLCore{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Direct3D12{static_cast<int32_t>(0x12)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::N3DS{static_cast<int32_t>(0x13)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Vulkan{static_cast<int32_t>(0x15)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::Switch{static_cast<int32_t>(0x16)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::XboxOneD3D12{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreXboxOne{static_cast<int32_t>(0x18)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreScarlett{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::GameCoreXboxSeries{static_cast<int32_t>(0x19)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation5{static_cast<int32_t>(0x1a)};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType  UnityEngine::Rendering::GraphicsDeviceType::PlayStation5NGGC{static_cast<int32_t>(0x1b)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
