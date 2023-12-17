#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AlwaysOwnedContentContainerSO)
namespace GlobalNamespace {
class AlwaysOwnedContentSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysOwnedContentContainerSO);
// Type: ::AlwaysOwnedContentContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4101))
// CS Name: ::AlwaysOwnedContentContainerSO*
class CORDL_TYPE AlwaysOwnedContentContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _alwaysOwnedContent offset 0x18
 __declspec(property(get=__get__alwaysOwnedContent, put=__set__alwaysOwnedContent)) ::GlobalNamespace::AlwaysOwnedContentSO*  _alwaysOwnedContent;

 __declspec(property(get=get_alwaysOwnedContent)) ::GlobalNamespace::AlwaysOwnedContentSO*  alwaysOwnedContent;

constexpr void __set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO*  value) ;

constexpr ::GlobalNamespace::AlwaysOwnedContentSO* __get__alwaysOwnedContent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentSO*> __get__alwaysOwnedContent() const;

/// @brief Method get_alwaysOwnedContent addr 0x22343e4 size 0x8 virtual false final false
inline ::GlobalNamespace::AlwaysOwnedContentSO* get_alwaysOwnedContent() ;

static inline ::GlobalNamespace::AlwaysOwnedContentContainerSO* New_ctor() ;

/// @brief Method .ctor addr 0x22343ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlwaysOwnedContentContainerSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysOwnedContentContainerSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentContainerSO*, "", "AlwaysOwnedContentContainerSO");
