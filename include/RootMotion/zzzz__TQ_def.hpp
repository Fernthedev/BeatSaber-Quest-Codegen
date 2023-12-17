#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TQ)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class TQ;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::TQ);
// Type: RootMotion::TQ
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12473))
// CS Name: ::RootMotion::TQ*
class CORDL_TYPE TQ : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field t offset 0x10
 __declspec(property(get=__get_t, put=__set_t)) ::UnityEngine::Vector3  t;

/// @brief Field q offset 0x1c
 __declspec(property(get=__get_q, put=__set_q)) ::UnityEngine::Quaternion  q;

constexpr void __set_t(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_t() ;

constexpr ::UnityEngine::Vector3 const& __get_t() const;

constexpr void __set_q(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_q() ;

constexpr ::UnityEngine::Quaternion const& __get_q() const;

static inline ::RootMotion::TQ* New_ctor(::UnityEngine::Vector3  translation, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method .ctor addr 0x1231c68 size 0x64 virtual false final false
inline void _ctor(::UnityEngine::Vector3  translation, ::UnityEngine::Quaternion  rotation) ;

// Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TQ(TQ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TQ(TQ const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TQ()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::TQ, 0x30>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::TQ);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TQ*, "RootMotion", "TQ");
