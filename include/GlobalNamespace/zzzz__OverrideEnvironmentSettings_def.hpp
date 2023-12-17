#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OverrideEnvironmentSettings)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideEnvironmentSettings);
// Type: ::OverrideEnvironmentSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4623))
// CS Name: ::OverrideEnvironmentSettings*
class CORDL_TYPE OverrideEnvironmentSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field overrideEnvironments offset 0x10
 __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments)) bool  overrideEnvironments;

/// @brief Field _data offset 0x18
 __declspec(property(get=__get__data, put=__set__data)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*,::GlobalNamespace::EnvironmentInfoSO*>*  _data;

constexpr void __set_overrideEnvironments(bool  value) ;

constexpr bool& __get_overrideEnvironments() ;

constexpr bool const& __get_overrideEnvironments() const;

constexpr void __set__data(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*,::GlobalNamespace::EnvironmentInfoSO*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*,::GlobalNamespace::EnvironmentInfoSO*>* __get__data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*,::GlobalNamespace::EnvironmentInfoSO*>*> __get__data() const;

/// @brief Method SetEnvironmentInfoForType addr 0x236af00 size 0x68 virtual false final false
inline void SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO*  environmentType, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo) ;

/// @brief Method GetOverrideEnvironmentInfoForType addr 0x236af68 size 0x78 virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO*  environmentType) ;

static inline ::GlobalNamespace::OverrideEnvironmentSettings* New_ctor() ;

/// @brief Method .ctor addr 0x236afe0 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverrideEnvironmentSettings(OverrideEnvironmentSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverrideEnvironmentSettings(OverrideEnvironmentSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OverrideEnvironmentSettings()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideEnvironmentSettings, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideEnvironmentSettings*, "", "OverrideEnvironmentSettings");
