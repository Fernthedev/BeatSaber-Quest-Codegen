#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PS4ActivePublisherSKUSettingsSO)
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4ActivePublisherSKUSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
// Type: ::PS4ActivePublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4550))
// CS Name: ::PS4ActivePublisherSKUSettingsSO*
class CORDL_TYPE PS4ActivePublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field activePublisherSKUSettings offset 0x18
 __declspec(property(get=__get_activePublisherSKUSettings, put=__set_activePublisherSKUSettings)) ::GlobalNamespace::PS4PublisherSKUSettingsSO*  activePublisherSKUSettings;

constexpr void __set_activePublisherSKUSettings(::GlobalNamespace::PS4PublisherSKUSettingsSO*  value) ;

constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO* __get_activePublisherSKUSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4PublisherSKUSettingsSO*> __get_activePublisherSKUSettings() const;

static inline ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* New_ctor() ;

/// @brief Method .ctor addr 0x23680bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS4ActivePublisherSKUSettingsSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, "", "PS4ActivePublisherSKUSettingsSO");
