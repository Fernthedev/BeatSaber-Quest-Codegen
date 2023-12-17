#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor)
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor);
// Type: UnityEngine::IntegratedSubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15959))
// CS Name: ::UnityEngine::IntegratedSubsystemDescriptor*
class CORDL_TYPE IntegratedSubsystemDescriptor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

 __declspec(property(get=get_id)) ::StringW  id;

/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr operator  ::UnityEngine::ISubsystemDescriptor*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method get_id addr 0x2d1a10c size 0x3c virtual true final true
inline ::StringW get_id() ;

/// @brief Method UnityEngine.ISubsystemDescriptor.Create addr 0x2d1a184 size 0xc virtual true final true
inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create() ;

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ISubsystem* CreateImpl() ;

static inline ::UnityEngine::IntegratedSubsystemDescriptor* New_ctor() ;

/// @brief Method .ctor addr 0x2d1a190 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntegratedSubsystemDescriptor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
