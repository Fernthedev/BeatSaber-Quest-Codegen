#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RequireComponent)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class RequireComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RequireComponent);
// Type: UnityEngine::RequireComponent
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10214))
// CS Name: ::UnityEngine::RequireComponent*
class CORDL_TYPE RequireComponent : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Attribute)]{};

/// @brief Field m_Type0 offset 0x10
 __declspec(property(get=__get_m_Type0, put=__set_m_Type0)) ::System::Type*  m_Type0;

/// @brief Field m_Type1 offset 0x18
 __declspec(property(get=__get_m_Type1, put=__set_m_Type1)) ::System::Type*  m_Type1;

/// @brief Field m_Type2 offset 0x20
 __declspec(property(get=__get_m_Type2, put=__set_m_Type2)) ::System::Type*  m_Type2;

constexpr void __set_m_Type0(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type0() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type0() const;

constexpr void __set_m_Type1(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type1() const;

constexpr void __set_m_Type2(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type2() const;

static inline ::UnityEngine::RequireComponent* New_ctor(::System::Type*  requiredComponent) ;

/// @brief Method .ctor addr 0x2cd276c size 0x28 virtual false final false
inline void _ctor(::System::Type*  requiredComponent) ;

static inline ::UnityEngine::RequireComponent* New_ctor(::System::Type*  requiredComponent, ::System::Type*  requiredComponent2) ;

/// @brief Method .ctor addr 0x2cd2794 size 0x2c virtual false final false
inline void _ctor(::System::Type*  requiredComponent, ::System::Type*  requiredComponent2) ;

// Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequireComponent(RequireComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequireComponent(RequireComponent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RequireComponent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RequireComponent, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RequireComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RequireComponent*, "UnityEngine", "RequireComponent");
