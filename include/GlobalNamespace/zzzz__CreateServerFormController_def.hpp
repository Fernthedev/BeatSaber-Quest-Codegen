#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerFormController)
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerFormController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreateServerFormController);
// Type: ::CreateServerFormController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5564))
// CS Name: ::CreateServerFormController*
class CORDL_TYPE CreateServerFormController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMinPlayers offset 0x0
static constexpr int32_t  kMinPlayers{static_cast<int32_t>(0x2)};

/// @brief Field kMaxPlayers offset 0x0
static constexpr int32_t  kMaxPlayers{static_cast<int32_t>(0x5)};

/// @brief Field _maxPlayersList offset 0x18
 __declspec(property(get=__get__maxPlayersList, put=__set__maxPlayersList)) ::GlobalNamespace::FormattedFloatListSettingsController*  _maxPlayersList;

/// @brief Field _netDiscoverable offset 0x20
 __declspec(property(get=__get__netDiscoverable, put=__set__netDiscoverable)) bool  _netDiscoverable;

 __declspec(property(get=get_formData)) ::GlobalNamespace::CreateServerFormData  formData;

constexpr void __set__maxPlayersList(::GlobalNamespace::FormattedFloatListSettingsController*  value) ;

constexpr ::GlobalNamespace::FormattedFloatListSettingsController* __get__maxPlayersList() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> __get__maxPlayersList() const;

constexpr void __set__netDiscoverable(bool  value) ;

constexpr bool& __get__netDiscoverable() ;

constexpr bool const& __get__netDiscoverable() const;

/// @brief Method get_formData addr 0x22a3a9c size 0xf0 virtual false final false
inline ::GlobalNamespace::CreateServerFormData get_formData() ;

/// @brief Method Setup addr 0x22a3b8c size 0x48 virtual false final false
inline void Setup(int32_t  selectedNumberOfPlayers, bool  netDiscoverable) ;

static inline ::GlobalNamespace::CreateServerFormController* New_ctor() ;

/// @brief Method .ctor addr 0x22a3bec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateServerFormController(CreateServerFormController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateServerFormController(CreateServerFormController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CreateServerFormController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerFormController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreateServerFormController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormController*, "", "CreateServerFormController");
