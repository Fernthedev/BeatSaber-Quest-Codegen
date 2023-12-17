#pragma once
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
constexpr void UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimatedSprites(::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimatedSprites()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*> const& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimatedSprites() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimationSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimationStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData(::ArrayW<::UnityEngine::Sprite*,::Array<::UnityEngine::Sprite*>*>  m_AnimatedSprites, float_t  m_AnimationSpeed, float_t  m_AnimationStartTime) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_AnimatedSprites = m_AnimatedSprites;
this->m_AnimationSpeed = m_AnimationSpeed;
this->m_AnimationStartTime = m_AnimationStartTime;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
