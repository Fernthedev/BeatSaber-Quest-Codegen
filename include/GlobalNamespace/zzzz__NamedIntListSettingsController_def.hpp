#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedIntListSettingsController)
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController__TextValuePair;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController__TextValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
// Type: ::TextValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5597))
// CS Name: ::NamedIntListSettingsController::TextValuePair*
class CORDL_TYPE __NamedIntListSettingsController__TextValuePair : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field text offset 0x10
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_localizedText)) ::StringW  localizedText;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method get_localizedText addr 0x22aafe4 size 0xc virtual false final false
inline ::StringW get_localizedText() ;

static inline ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x22aaff8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NamedIntListSettingsController__TextValuePair()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NamedIntListSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5598))
// CS Name: ::NamedIntListSettingsController*
class CORDL_TYPE NamedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
// Declarations
using TextValuePair = ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::ListSettingsController)]{};

/// @brief Field _settingsValue offset 0x28
 __declspec(property(get=__get__settingsValue, put=__set__settingsValue)) ::GlobalNamespace::IntSO*  _settingsValue;

/// @brief Field _textValuePairs offset 0x30
 __declspec(property(get=__get__textValuePairs, put=__set__textValuePairs)) ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>  _textValuePairs;

constexpr void __set__settingsValue(::GlobalNamespace::IntSO*  value) ;

constexpr ::GlobalNamespace::IntSO* __get__settingsValue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> __get__settingsValue() const;

constexpr void __set__textValuePairs(::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>& __get__textValuePairs() ;

constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> const& __get__textValuePairs() const;

/// @brief Method GetInitValues addr 0x22aae64 size 0xc8 virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x22aaf2c size 0x7c virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method TextForValue addr 0x22aafa8 size 0x3c virtual true final false
inline ::StringW TextForValue(int32_t  idx) ;

static inline ::GlobalNamespace::NamedIntListSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22aaff0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedIntListSettingsController(NamedIntListSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedIntListSettingsController(NamedIntListSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NamedIntListSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController*, "", "NamedIntListSettingsController");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
