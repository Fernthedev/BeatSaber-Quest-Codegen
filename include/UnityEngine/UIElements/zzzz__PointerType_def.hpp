#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerType)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerType;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerType);
// Type: UnityEngine.UIElements::PointerType
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7194))
// CS Name: ::UnityEngine.UIElements::PointerType*
class CORDL_TYPE PointerType : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_mouse(::StringW  value) ;

static inline ::StringW getStaticF_mouse() ;

static inline void setStaticF_touch(::StringW  value) ;

static inline ::StringW getStaticF_touch() ;

static inline void setStaticF_pen(::StringW  value) ;

static inline ::StringW getStaticF_pen() ;

static inline void setStaticF_unknown(::StringW  value) ;

static inline ::StringW getStaticF_unknown() ;

/// @brief Method GetPointerType addr 0x2e4ebc8 size 0x9c virtual false final false
static inline ::StringW GetPointerType(int32_t  pointerId) ;

/// @brief Method IsDirectManipulationDevice addr 0x2e4ec64 size 0x8c virtual false final false
static inline bool IsDirectManipulationDevice(::StringW  pointerType) ;

// Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerType(PointerType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerType(PointerType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerType()  = default;
public:


// Fields

// Static field mouse

// Static field touch

// Static field pen

// Static field unknown


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerType, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerType*, "UnityEngine.UIElements", "PointerType");
