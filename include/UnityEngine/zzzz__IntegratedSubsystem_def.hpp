#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedSubsystem)
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystem);
// Type: UnityEngine::IntegratedSubsystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15964))
// CS Name: ::UnityEngine::IntegratedSubsystem*
class CORDL_TYPE IntegratedSubsystem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_SubsystemDescriptor offset 0x18
 __declspec(property(get=__get_m_SubsystemDescriptor, put=__set_m_SubsystemDescriptor)) ::UnityEngine::ISubsystemDescriptor*  m_SubsystemDescriptor;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::UnityEngine::ISubsystem"
constexpr operator  ::UnityEngine::ISubsystem*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_SubsystemDescriptor(::UnityEngine::ISubsystemDescriptor*  value) ;

constexpr ::UnityEngine::ISubsystemDescriptor* __get_m_SubsystemDescriptor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ISubsystemDescriptor*> __get_m_SubsystemDescriptor() const;

/// @brief Method SetHandle addr 0x2d1a2bc size 0x44 virtual false final false
inline void SetHandle(::UnityEngine::IntegratedSubsystem*  subsystem) ;

/// @brief Method Start addr 0x2d1a300 size 0x3c virtual true final true
inline void Start() ;

/// @brief Method Stop addr 0x2d1a33c size 0x3c virtual true final true
inline void Stop() ;

/// @brief Method Destroy addr 0x2d1a378 size 0xb0 virtual true final true
inline void Destroy() ;

/// @brief Method get_running addr 0x2d1a5e8 size 0x54 virtual true final true
inline bool get_running() ;

/// @brief Method get_valid addr 0x2d1a63c size 0x54 virtual false final false
inline bool get_valid() ;

/// @brief Method IsRunning addr 0x2d1a690 size 0x3c virtual false final false
inline bool IsRunning() ;

static inline ::UnityEngine::IntegratedSubsystem* New_ctor() ;

/// @brief Method .ctor addr 0x2d1a6cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedSubsystem(IntegratedSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedSubsystem(IntegratedSubsystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntegratedSubsystem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystem, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystem*, "UnityEngine", "IntegratedSubsystem");
