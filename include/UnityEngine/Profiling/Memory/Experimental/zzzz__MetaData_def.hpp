#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MetaData)
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Memory::Experimental::MetaData);
// Type: UnityEngine.Profiling.Memory.Experimental::MetaData
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10298))
// CS Name: ::UnityEngine.Profiling.Memory.Experimental::MetaData*
class CORDL_TYPE MetaData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field content offset 0x10
 __declspec(property(get=__get_content, put=__set_content)) ::StringW  content;

/// @brief Field platform offset 0x18
 __declspec(property(get=__get_platform, put=__set_platform)) ::StringW  platform;

constexpr void __set_content(::StringW  value) ;

constexpr ::StringW& __get_content() ;

constexpr ::StringW const& __get_content() const;

constexpr void __set_platform(::StringW  value) ;

constexpr ::StringW& __get_platform() ;

constexpr ::StringW const& __get_platform() const;

static inline ::UnityEngine::Profiling::Memory::Experimental::MetaData* New_ctor() ;

/// @brief Method .ctor addr 0x2ce6cd0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaData(MetaData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaData(MetaData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MetaData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Memory::Experimental::MetaData, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MetaData*, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
