#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
constexpr void UnityEngine::Collision2D::__set_m_Collider(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_Collider()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_Collider() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_OtherCollider(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_OtherCollider()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_OtherCollider() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_Rigidbody(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_Rigidbody()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_Rigidbody() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_OtherRigidbody(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_OtherRigidbody()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_OtherRigidbody() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_RelativeVelocity(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x20>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::Collision2D::__get_m_RelativeVelocity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Collision2D::__get_m_RelativeVelocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_Enabled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_Enabled()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_Enabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_ContactCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision2D::__get_m_ContactCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& UnityEngine::Collision2D::__get_m_ContactCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& UnityEngine::Collision2D::__get_m_ReusedContacts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& UnityEngine::Collision2D::__get_m_ReusedContacts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x30>(this);
}
constexpr void UnityEngine::Collision2D::__set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& UnityEngine::Collision2D::__get_m_LegacyContacts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& UnityEngine::Collision2D::__get_m_LegacyContacts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, 0x38>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
