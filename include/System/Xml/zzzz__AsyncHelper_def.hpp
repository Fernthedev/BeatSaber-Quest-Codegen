#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelper)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Xml {
class AsyncHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::AsyncHelper);
// Type: System.Xml::AsyncHelper
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11403))
// CS Name: ::System.Xml::AsyncHelper*
class CORDL_TYPE AsyncHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_DoneTask(::System::Threading::Tasks::Task*  value) ;

static inline ::System::Threading::Tasks::Task* getStaticF_DoneTask() ;

static inline void setStaticF_DoneTaskTrue(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_DoneTaskTrue() ;

static inline void setStaticF_DoneTaskFalse(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_DoneTaskFalse() ;

static inline void setStaticF_DoneTaskZero(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_DoneTaskZero() ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncHelper(AsyncHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncHelper(AsyncHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncHelper()  = default;
public:


// Fields

// Static field DoneTask

// Static field DoneTaskTrue

// Static field DoneTaskFalse

// Static field DoneTaskZero


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::AsyncHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AsyncHelper*, "System.Xml", "AsyncHelper");
