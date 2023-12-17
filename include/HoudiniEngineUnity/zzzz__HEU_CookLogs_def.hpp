#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_CookLogs)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookLogs;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookLogs);
// Type: HoudiniEngineUnity::HEU_CookLogs
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9818))
// CS Name: ::HoudiniEngineUnity::HEU_CookLogs*
class CORDL_TYPE HEU_CookLogs : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MAX_COOK_LOG_COUNT offset 0x0
static constexpr int32_t  MAX_COOK_LOG_COUNT{static_cast<int32_t>(0x2329)};

/// @brief Field MaxLogSize offset 0x0
static constexpr int64_t  MaxLogSize{static_cast<int64_t>(0x2faf080)};

/// @brief Field _cookLogs offset 0x10
 __declspec(property(get=__get__cookLogs, put=__set__cookLogs)) ::System::Text::StringBuilder*  _cookLogs;

/// @brief Field _currentCookLogCount offset 0x18
 __declspec(property(get=__get__currentCookLogCount, put=__set__currentCookLogCount)) int32_t  _currentCookLogCount;

/// @brief Field _lastLogStr offset 0x20
 __declspec(property(get=__get__lastLogStr, put=__set__lastLogStr)) ::StringW  _lastLogStr;

/// @brief Field _uniqueStrOnly offset 0x28
 __declspec(property(get=__get__uniqueStrOnly, put=__set__uniqueStrOnly)) bool  _uniqueStrOnly;

static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_CookLogs*  value) ;

static inline ::HoudiniEngineUnity::HEU_CookLogs* getStaticF__instance() ;

constexpr void __set__cookLogs(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__cookLogs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__cookLogs() const;

constexpr void __set__currentCookLogCount(int32_t  value) ;

constexpr int32_t& __get__currentCookLogCount() ;

constexpr int32_t const& __get__currentCookLogCount() const;

constexpr void __set__lastLogStr(::StringW  value) ;

constexpr ::StringW& __get__lastLogStr() ;

constexpr ::StringW const& __get__lastLogStr() const;

constexpr void __set__uniqueStrOnly(bool  value) ;

constexpr bool& __get__uniqueStrOnly() ;

constexpr bool const& __get__uniqueStrOnly() const;

/// @brief Method get_Instance addr 0x21b16dc size 0x7c virtual false final false
static inline ::HoudiniEngineUnity::HEU_CookLogs* get_Instance() ;

/// @brief Method GetCookLogString addr 0x21b17e4 size 0x20 virtual false final false
inline ::StringW GetCookLogString() ;

/// @brief Method AppendCookLog addr 0x21b1804 size 0x100 virtual false final false
inline void AppendCookLog(::StringW  logStr) ;

/// @brief Method ClearCookLog addr 0x21b1b4c size 0x64 virtual false final false
inline void ClearCookLog() ;

/// @brief Method GetCookLogFilePath addr 0x21b1bb0 size 0xd4 virtual false final false
inline ::StringW GetCookLogFilePath() ;

/// @brief Method DeleteCookingFile addr 0x21b1c84 size 0x88 virtual false final false
inline void DeleteCookingFile() ;

/// @brief Method WriteToLogFile addr 0x21b1904 size 0x248 virtual false final false
inline void WriteToLogFile(::StringW  logStr, bool  checkLastLogStr) ;

/// @brief Method GetFileSizeOfLogFile addr 0x21b1d0c size 0x88 virtual false final false
inline int64_t GetFileSizeOfLogFile() ;

static inline ::HoudiniEngineUnity::HEU_CookLogs* New_ctor() ;

/// @brief Method .ctor addr 0x21b1758 size 0x8c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_CookLogs(HEU_CookLogs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_CookLogs(HEU_CookLogs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_CookLogs()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookLogs, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookLogs);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookLogs*, "HoudiniEngineUnity", "HEU_CookLogs");
