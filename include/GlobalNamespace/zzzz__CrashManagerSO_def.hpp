#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrashManagerSO)
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashManagerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrashManagerSO);
// Type: ::CrashManagerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5828))
// CS Name: ::CrashManagerSO*
class CORDL_TYPE CrashManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _logString offset 0x18
 __declspec(property(get=__get__logString, put=__set__logString)) ::StringW  _logString;

/// @brief Field _stackTrace offset 0x20
 __declspec(property(get=__get__stackTrace, put=__set__stackTrace)) ::StringW  _stackTrace;

 __declspec(property(get=get_logString)) ::StringW  logString;

 __declspec(property(get=get_stackTrace)) ::StringW  stackTrace;

constexpr void __set__logString(::StringW  value) ;

constexpr ::StringW& __get__logString() ;

constexpr ::StringW const& __get__logString() const;

constexpr void __set__stackTrace(::StringW  value) ;

constexpr ::StringW& __get__stackTrace() ;

constexpr ::StringW const& __get__stackTrace() const;

/// @brief Method get_logString addr 0x22ec5b0 size 0x8 virtual false final false
inline ::StringW get_logString() ;

/// @brief Method get_stackTrace addr 0x22ec5b8 size 0x8 virtual false final false
inline ::StringW get_stackTrace() ;

/// @brief Method StartCatchingExceptions addr 0x22ec5c0 size 0x80 virtual false final false
inline void StartCatchingExceptions() ;

/// @brief Method OnDisable addr 0x22ec640 size 0x80 virtual false final false
inline void OnDisable() ;

/// @brief Method HandleLog addr 0x22ec6c0 size 0xa0 virtual false final false
inline void HandleLog(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

static inline ::GlobalNamespace::CrashManagerSO* New_ctor() ;

/// @brief Method .ctor addr 0x22ec760 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrashManagerSO(CrashManagerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrashManagerSO(CrashManagerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrashManagerSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrashManagerSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrashManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashManagerSO*, "", "CrashManagerSO");
