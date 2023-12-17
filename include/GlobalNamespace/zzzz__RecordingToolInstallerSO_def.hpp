#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolInstallerSO)
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolInstallerSO);
// Type: ::RecordingToolInstallerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5961))
// CS Name: ::RecordingToolInstallerSO*
class CORDL_TYPE RecordingToolInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Field _recordingToolResourceContainer offset 0x20
 __declspec(property(get=__get__recordingToolResourceContainer, put=__set__recordingToolResourceContainer)) ::GlobalNamespace::RecordingToolResourceContainerSO*  _recordingToolResourceContainer;

constexpr void __set__recordingToolResourceContainer(::GlobalNamespace::RecordingToolResourceContainerSO*  value) ;

constexpr ::GlobalNamespace::RecordingToolResourceContainerSO* __get__recordingToolResourceContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolResourceContainerSO*> __get__recordingToolResourceContainer() const;

/// @brief Method InstallBindings addr 0x2307f30 size 0x1e4 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::RecordingToolInstallerSO* New_ctor() ;

/// @brief Method .ctor addr 0x2308114 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolInstallerSO(RecordingToolInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolInstallerSO(RecordingToolInstallerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolInstallerSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolInstallerSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
