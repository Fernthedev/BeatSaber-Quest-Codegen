#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AbstractEventData)
// Forward declare root types
namespace UnityEngine::EventSystems {
class AbstractEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::AbstractEventData);
// Type: UnityEngine.EventSystems::AbstractEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13164))
// CS Name: ::UnityEngine.EventSystems::AbstractEventData*
class CORDL_TYPE AbstractEventData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Used offset 0x10
 __declspec(property(get=__get_m_Used, put=__set_m_Used)) bool  m_Used;

 __declspec(property(get=get_used)) bool  used;

constexpr void __set_m_Used(bool  value) ;

constexpr bool& __get_m_Used() ;

constexpr bool const& __get_m_Used() const;

/// @brief Method Reset addr 0x2d95428 size 0x8 virtual true final false
inline void Reset() ;

/// @brief Method Use addr 0x2d95430 size 0xc virtual true final false
inline void Use() ;

/// @brief Method get_used addr 0x2d9543c size 0x8 virtual true final false
inline bool get_used() ;

static inline ::UnityEngine::EventSystems::AbstractEventData* New_ctor() ;

/// @brief Method .ctor addr 0x2d95444 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractEventData(AbstractEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractEventData(AbstractEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbstractEventData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::AbstractEventData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::AbstractEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::AbstractEventData*, "UnityEngine.EventSystems", "AbstractEventData");
